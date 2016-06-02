import numpy

AFSK_FREQUENCY = int(1200)

APRS_SIGNAL_GENERATION_FREQUENCY = 80 * AFSK_FREQUENCY # 96000 Hz

QUANT_STEP_SIZE = 1 # APRS_SIGNAL_GENERATION_FREQUENCY must be integer multiple of AFSK_FREQUENCY

TRANSMITTER_WARMUP_TIME_MILLISECONDS = 10

QUANT_MIN_VALUE         = 0
QUANT_MAX_VALUE         = (1 << 12) - 1 # 12 bit dac

TRIG_TABLE_SIZE         = 3072
INVERSE_TRIG_TABLE_SIZE = 3072


# these 2 are liked and there will be an overflow if sum is > than 6
PRECISION_QUANT                        = 4
PRECISION_TRIG_SCALER                  = 2

# these 2 are linked and there will be an overflow if sum is > than 7
PRECISION_INVERSE_TRIG                 = 3
PRECISION_RECIPROCAL_ANGULAR_FREQUENCY = 4

PRECISION_AMPLITUDE                    = 3
PRECISION_INVERSE_TRIG_SCALER          = 3
PRECISION_TRIG                         = 3

PRECISION_AMPLITUDE_OUTPUT             = 0
PRECISION_TRIG_ARG                     = 0
PRECISION_INVERSE_TRIG_ARG             = 0
