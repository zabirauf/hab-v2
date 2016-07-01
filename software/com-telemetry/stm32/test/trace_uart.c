#include "trace_uart.h"

#ifdef TEST

    #include "../inc/errors.h"
    #include "../inc/mxconstants.h"

    #include <stm32l0xx_hal_rcc.h>
    #include <stm32l0xx_hal_cortex.h>
    #include <stm32l0xx_hal_uart_ex.h>

    static __IO ITStatus g_uartReady;
    static UART_HandleTypeDef g_uartHandle;

    void traceUartInit(void)
    {
        g_uartReady = RESET;

        g_uartHandle.Instance        = TRACE_UART;
        g_uartHandle.Init.BaudRate   = 115200;
        g_uartHandle.Init.WordLength = UART_WORDLENGTH_8B;
        g_uartHandle.Init.StopBits   = UART_STOPBITS_1;
        g_uartHandle.Init.Parity     = UART_PARITY_NONE;
        g_uartHandle.Init.HwFlowCtl  = UART_HWCONTROL_NONE;
        g_uartHandle.Init.Mode       = UART_MODE_TX_RX;

        if(HAL_UART_DeInit(&g_uartHandle) != HAL_OK)
        {
            ERROR_UART();
        }
        if(HAL_UART_Init(&g_uartHandle) != HAL_OK)
        {
            ERROR_UART();
        }
    }

    void transmitBuffer(uint8_t* pBuffer, uint8_t bufferSize)
    {
        if(HAL_UART_Transmit_DMA(&g_uartHandle, pBuffer, bufferSize)!= HAL_OK)
        {
            ERROR_UART();
        }
        while (g_uartReady != SET)
        {
        }
        g_uartReady = RESET;
    }

    void traceUartMspInit(UART_HandleTypeDef* pUart)
    {
        static DMA_HandleTypeDef hdma_tx;
        static DMA_HandleTypeDef hdma_rx;

        GPIO_InitTypeDef gpioInitStruct;

        TRACE_UART_RX_GPIO_CLK_ENABLE();
        TRACE_UART_TX_GPIO_CLK_ENABLE();
        TRACE_UART_CLK_ENABLE();
        TRACE_DMA_CLK_ENABLE();

        gpioInitStruct.Pin       = TRACE_UART_TX_PIN;
        gpioInitStruct.Mode      = GPIO_MODE_AF_PP;
        gpioInitStruct.Pull      = GPIO_PULLUP;
        gpioInitStruct.Speed     = GPIO_SPEED_FREQ_VERY_HIGH;
        gpioInitStruct.Alternate = TRACE_UART_TX_AF;

        HAL_GPIO_Init(TRACE_UART_TX_GPIO_PORT, &gpioInitStruct);

        gpioInitStruct.Pin       = TRACE_UART_RX_PIN;
        gpioInitStruct.Alternate = TRACE_UART_RX_AF;

        HAL_GPIO_Init(TRACE_UART_RX_GPIO_PORT, &gpioInitStruct);

        hdma_tx.Instance                 = TRACE_UART_TX_DMA_CHANNEL;
        hdma_tx.Init.Direction           = DMA_MEMORY_TO_PERIPH;
        hdma_tx.Init.PeriphInc           = DMA_PINC_DISABLE;
        hdma_tx.Init.MemInc              = DMA_MINC_ENABLE;
        hdma_tx.Init.PeriphDataAlignment = DMA_PDATAALIGN_BYTE;
        hdma_tx.Init.MemDataAlignment    = DMA_MDATAALIGN_BYTE;
        hdma_tx.Init.Mode                = DMA_NORMAL;
        hdma_tx.Init.Priority            = DMA_PRIORITY_LOW;
        hdma_tx.Init.Request             = TRACE_UART_TX_DMA_REQUEST;

        HAL_DMA_Init(&hdma_tx);

        __HAL_LINKDMA(pUart, hdmatx, hdma_tx);

        hdma_rx.Instance                 = TRACE_UART_RX_DMA_CHANNEL;
        hdma_rx.Init.Direction           = DMA_PERIPH_TO_MEMORY;
        hdma_rx.Init.PeriphInc           = DMA_PINC_DISABLE;
        hdma_rx.Init.MemInc              = DMA_MINC_ENABLE;
        hdma_rx.Init.PeriphDataAlignment = DMA_PDATAALIGN_BYTE;
        hdma_rx.Init.MemDataAlignment    = DMA_MDATAALIGN_BYTE;
        hdma_rx.Init.Mode                = DMA_NORMAL;
        hdma_rx.Init.Priority            = DMA_PRIORITY_HIGH;
        hdma_rx.Init.Request             = TRACE_UART_RX_DMA_REQUEST;

        HAL_DMA_Init(&hdma_rx);

        __HAL_LINKDMA(pUart, hdmarx, hdma_rx);

        HAL_NVIC_SetPriority(TRACE_UART_DMA_TX_IRQn, 0, 0);
        HAL_NVIC_EnableIRQ(TRACE_UART_DMA_TX_IRQn);

        HAL_NVIC_SetPriority(TRACE_UART_DMA_RX_IRQn, 0, 0);
        HAL_NVIC_EnableIRQ(TRACE_UART_DMA_RX_IRQn);

        HAL_NVIC_SetPriority(TRACE_UART_IRQn, 0, 0);
        HAL_NVIC_EnableIRQ(TRACE_UART_IRQn);
    }

    void traceUartMspDeInit(UART_HandleTypeDef* pUart)
    {
        TRACE_UART_FORCE_RESET();
        TRACE_UART_RELEASE_RESET();

        HAL_GPIO_DeInit(TRACE_UART_TX_GPIO_PORT, TRACE_UART_TX_PIN);
        HAL_GPIO_DeInit(TRACE_UART_RX_GPIO_PORT, TRACE_UART_RX_PIN);

        if (pUart->hdmarx != 0)
        {
            HAL_DMA_DeInit(pUart->hdmarx);
        }
        if (pUart->hdmatx != 0)
        {
            HAL_DMA_DeInit(pUart->hdmatx);
        }

        HAL_NVIC_DisableIRQ(TRACE_UART_DMA_TX_IRQn);
        HAL_NVIC_DisableIRQ(TRACE_UART_DMA_RX_IRQn);
    }

    void HAL_UART_TxCpltCallback(UART_HandleTypeDef *UartHandle)
    {
        g_uartReady = SET;
    }

    void TRACE_DMA_RX_IRQHandler(void)
    {
        HAL_DMA_IRQHandler(g_uartHandle.hdmatx);
        HAL_DMA_IRQHandler(g_uartHandle.hdmarx);
    }

    void TRACE_UART_IRQHandler(void)
    {
        HAL_UART_IRQHandler(&g_uartHandle);
    }

#endif