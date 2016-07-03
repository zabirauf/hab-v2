#include "ax25.h"

const AX25EncodedData byte2ax25EncodedData[] =
{
  {85, 8, 0},
  {170, 8, 0},
  {171, 8, 0},
  {84, 8, 0},
  {169, 8, 0},
  {86, 8, 0},
  {87, 8, 0},
  {168, 8, 0},
  {173, 8, 0},
  {82, 8, 0},
  {83, 8, 0},
  {172, 8, 0},
  {81, 8, 0},
  {174, 8, 0},
  {175, 8, 0},
  {80, 8, 0},
  {165, 8, 0},
  {90, 8, 0},
  {91, 8, 0},
  {164, 8, 0},
  {89, 8, 0},
  {166, 8, 0},
  {167, 8, 0},
  {88, 8, 0},
  {93, 8, 0},
  {162, 8, 0},
  {163, 8, 0},
  {92, 8, 0},
  {161, 8, 0},
  {94, 8, 0},
  {95, 8, 0},
  {160, 9, 0},
  {181, 8, 0},
  {74, 8, 0},
  {75, 8, 0},
  {180, 8, 0},
  {73, 8, 0},
  {182, 8, 0},
  {183, 8, 0},
  {72, 8, 0},
  {77, 8, 0},
  {178, 8, 0},
  {179, 8, 0},
  {76, 8, 0},
  {177, 8, 0},
  {78, 8, 0},
  {79, 8, 0},
  {176, 8, 0},
  {69, 8, 0},
  {186, 8, 0},
  {187, 8, 0},
  {68, 8, 0},
  {185, 8, 0},
  {70, 8, 0},
  {71, 8, 0},
  {184, 8, 0},
  {189, 8, 0},
  {66, 8, 0},
  {67, 8, 0},
  {188, 8, 0},
  {65, 8, 0},
  {190, 8, 0},
  {191, 9, 0},
  {352, 9, 0},
  {149, 8, 0},
  {106, 8, 0},
  {107, 8, 0},
  {148, 8, 0},
  {105, 8, 0},
  {150, 8, 0},
  {151, 8, 0},
  {104, 8, 0},
  {109, 8, 0},
  {146, 8, 0},
  {147, 8, 0},
  {108, 8, 0},
  {145, 8, 0},
  {110, 8, 0},
  {111, 8, 0},
  {144, 8, 0},
  {101, 8, 0},
  {154, 8, 0},
  {155, 8, 0},
  {100, 8, 0},
  {153, 8, 0},
  {102, 8, 0},
  {103, 8, 0},
  {152, 8, 0},
  {157, 8, 0},
  {98, 8, 0},
  {99, 8, 0},
  {156, 8, 0},
  {97, 8, 0},
  {158, 8, 0},
  {159, 8, 0},
  {288, 9, 0},
  {117, 8, 0},
  {138, 8, 0},
  {139, 8, 0},
  {116, 8, 0},
  {137, 8, 0},
  {118, 8, 0},
  {119, 8, 0},
  {136, 8, 0},
  {141, 8, 0},
  {114, 8, 0},
  {115, 8, 0},
  {140, 8, 0},
  {113, 8, 0},
  {142, 8, 0},
  {143, 8, 0},
  {112, 8, 0},
  {133, 8, 0},
  {122, 8, 0},
  {123, 8, 0},
  {132, 8, 0},
  {121, 8, 0},
  {134, 8, 0},
  {135, 8, 0},
  {120, 8, 0},
  {125, 8, 0},
  {130, 8, 0},
  {131, 8, 0},
  {124, 8, 0},
  {129, 9, 0},
  {382, 9, 0},
  {319, 9, 0},
  {224, 9, 0},
  {213, 8, 1},
  {42, 8, 1},
  {43, 8, 1},
  {212, 8, 1},
  {41, 8, 1},
  {214, 8, 1},
  {215, 8, 1},
  {40, 8, 1},
  {45, 8, 1},
  {210, 8, 1},
  {211, 8, 1},
  {44, 8, 1},
  {209, 8, 1},
  {46, 8, 1},
  {47, 8, 1},
  {208, 8, 1},
  {37, 8, 1},
  {218, 8, 1},
  {219, 8, 1},
  {36, 8, 1},
  {217, 8, 1},
  {38, 8, 1},
  {39, 8, 1},
  {216, 8, 1},
  {221, 8, 1},
  {34, 8, 1},
  {35, 8, 1},
  {220, 8, 1},
  {33, 8, 1},
  {222, 8, 1},
  {223, 8, 1},
  {416, 9, 1},
  {53, 8, 1},
  {202, 8, 1},
  {203, 8, 1},
  {52, 8, 1},
  {201, 8, 1},
  {54, 8, 1},
  {55, 8, 1},
  {200, 8, 1},
  {205, 8, 1},
  {50, 8, 1},
  {51, 8, 1},
  {204, 8, 1},
  {49, 8, 1},
  {206, 8, 1},
  {207, 8, 1},
  {48, 8, 1},
  {197, 8, 1},
  {58, 8, 1},
  {59, 8, 1},
  {196, 8, 1},
  {57, 8, 1},
  {198, 8, 1},
  {199, 8, 1},
  {56, 8, 1},
  {61, 8, 1},
  {194, 8, 1},
  {195, 8, 1},
  {60, 8, 1},
  {193, 8, 1},
  {62, 8, 1},
  {447, 9, 1},
  {96, 9, 1},
  {21, 8, 2},
  {234, 8, 2},
  {235, 8, 2},
  {20, 8, 2},
  {233, 8, 2},
  {22, 8, 2},
  {23, 8, 2},
  {232, 8, 2},
  {237, 8, 2},
  {18, 8, 2},
  {19, 8, 2},
  {236, 8, 2},
  {17, 8, 2},
  {238, 8, 2},
  {239, 8, 2},
  {16, 8, 2},
  {229, 8, 2},
  {26, 8, 2},
  {27, 8, 2},
  {228, 8, 2},
  {25, 8, 2},
  {230, 8, 2},
  {231, 8, 2},
  {24, 8, 2},
  {29, 8, 2},
  {226, 8, 2},
  {227, 8, 2},
  {28, 8, 2},
  {225, 8, 2},
  {30, 8, 2},
  {31, 8, 2},
  {32, 9, 2},
  {245, 8, 3},
  {10, 8, 3},
  {11, 8, 3},
  {244, 8, 3},
  {9, 8, 3},
  {246, 8, 3},
  {247, 8, 3},
  {8, 8, 3},
  {13, 8, 3},
  {242, 8, 3},
  {243, 8, 3},
  {12, 8, 3},
  {241, 8, 3},
  {14, 8, 3},
  {15, 8, 3},
  {240, 8, 3},
  {5, 8, 4},
  {250, 8, 4},
  {251, 8, 4},
  {4, 8, 4},
  {249, 8, 4},
  {6, 8, 4},
  {7, 8, 4},
  {248, 8, 4},
  {253, 9, 0},
  {258, 9, 0},
  {259, 9, 0},
  {252, 9, 0},
  {385, 9, 1},
  {126, 9, 1},
  {63, 9, 2},
  {480, 9, 3},
  {85, 8, 0},
  {170, 8, 0},
  {171, 8, 0},
  {84, 8, 0},
  {169, 8, 0},
  {86, 8, 0},
  {87, 8, 0},
  {168, 8, 0},
  {173, 8, 0},
  {82, 8, 0},
  {83, 8, 0},
  {172, 8, 0},
  {81, 8, 0},
  {174, 8, 0},
  {175, 8, 0},
  {80, 8, 0},
  {165, 8, 0},
  {90, 8, 0},
  {91, 8, 0},
  {164, 8, 0},
  {89, 8, 0},
  {166, 8, 0},
  {167, 8, 0},
  {88, 8, 0},
  {93, 8, 0},
  {162, 8, 0},
  {163, 8, 0},
  {92, 8, 0},
  {161, 8, 0},
  {94, 8, 0},
  {95, 8, 0},
  {160, 9, 0},
  {181, 8, 0},
  {74, 8, 0},
  {75, 8, 0},
  {180, 8, 0},
  {73, 8, 0},
  {182, 8, 0},
  {183, 8, 0},
  {72, 8, 0},
  {77, 8, 0},
  {178, 8, 0},
  {179, 8, 0},
  {76, 8, 0},
  {177, 8, 0},
  {78, 8, 0},
  {79, 8, 0},
  {176, 8, 0},
  {69, 8, 0},
  {186, 8, 0},
  {187, 8, 0},
  {68, 8, 0},
  {185, 8, 0},
  {70, 8, 0},
  {71, 8, 0},
  {184, 8, 0},
  {189, 8, 0},
  {66, 8, 0},
  {67, 8, 0},
  {188, 8, 0},
  {65, 8, 0},
  {190, 8, 0},
  {191, 9, 0},
  {352, 9, 0},
  {149, 8, 0},
  {106, 8, 0},
  {107, 8, 0},
  {148, 8, 0},
  {105, 8, 0},
  {150, 8, 0},
  {151, 8, 0},
  {104, 8, 0},
  {109, 8, 0},
  {146, 8, 0},
  {147, 8, 0},
  {108, 8, 0},
  {145, 8, 0},
  {110, 8, 0},
  {111, 8, 0},
  {144, 8, 0},
  {101, 8, 0},
  {154, 8, 0},
  {155, 8, 0},
  {100, 8, 0},
  {153, 8, 0},
  {102, 8, 0},
  {103, 8, 0},
  {152, 8, 0},
  {157, 8, 0},
  {98, 8, 0},
  {99, 8, 0},
  {156, 8, 0},
  {97, 8, 0},
  {158, 8, 0},
  {159, 8, 0},
  {288, 9, 0},
  {117, 8, 0},
  {138, 8, 0},
  {139, 8, 0},
  {116, 8, 0},
  {137, 8, 0},
  {118, 8, 0},
  {119, 8, 0},
  {136, 8, 0},
  {141, 8, 0},
  {114, 8, 0},
  {115, 8, 0},
  {140, 8, 0},
  {113, 8, 0},
  {142, 8, 0},
  {143, 8, 0},
  {112, 8, 0},
  {133, 8, 0},
  {122, 8, 0},
  {123, 8, 0},
  {132, 8, 0},
  {121, 8, 0},
  {134, 8, 0},
  {135, 8, 0},
  {120, 8, 0},
  {125, 8, 0},
  {130, 8, 0},
  {131, 8, 0},
  {124, 8, 0},
  {129, 9, 0},
  {382, 9, 0},
  {319, 9, 0},
  {224, 9, 0},
  {213, 8, 1},
  {42, 8, 1},
  {43, 8, 1},
  {212, 8, 1},
  {41, 8, 1},
  {214, 8, 1},
  {215, 8, 1},
  {40, 8, 1},
  {45, 8, 1},
  {210, 8, 1},
  {211, 8, 1},
  {44, 8, 1},
  {209, 8, 1},
  {46, 8, 1},
  {47, 8, 1},
  {208, 8, 1},
  {37, 8, 1},
  {218, 8, 1},
  {219, 8, 1},
  {36, 8, 1},
  {217, 8, 1},
  {38, 8, 1},
  {39, 8, 1},
  {216, 8, 1},
  {221, 8, 1},
  {34, 8, 1},
  {35, 8, 1},
  {220, 8, 1},
  {33, 8, 1},
  {222, 8, 1},
  {223, 8, 1},
  {416, 9, 1},
  {53, 8, 1},
  {202, 8, 1},
  {203, 8, 1},
  {52, 8, 1},
  {201, 8, 1},
  {54, 8, 1},
  {55, 8, 1},
  {200, 8, 1},
  {205, 8, 1},
  {50, 8, 1},
  {51, 8, 1},
  {204, 8, 1},
  {49, 8, 1},
  {206, 8, 1},
  {207, 8, 1},
  {48, 8, 1},
  {197, 8, 1},
  {58, 8, 1},
  {59, 8, 1},
  {196, 8, 1},
  {57, 8, 1},
  {198, 8, 1},
  {199, 8, 1},
  {56, 8, 1},
  {61, 8, 1},
  {194, 8, 1},
  {195, 8, 1},
  {60, 8, 1},
  {193, 8, 1},
  {62, 8, 1},
  {447, 9, 1},
  {96, 9, 1},
  {21, 8, 2},
  {234, 8, 2},
  {235, 8, 2},
  {20, 8, 2},
  {233, 8, 2},
  {22, 8, 2},
  {23, 8, 2},
  {232, 8, 2},
  {237, 8, 2},
  {18, 8, 2},
  {19, 8, 2},
  {236, 8, 2},
  {17, 8, 2},
  {238, 8, 2},
  {239, 8, 2},
  {16, 8, 2},
  {229, 8, 2},
  {26, 8, 2},
  {27, 8, 2},
  {228, 8, 2},
  {25, 8, 2},
  {230, 8, 2},
  {231, 8, 2},
  {24, 8, 2},
  {29, 8, 2},
  {226, 8, 2},
  {227, 8, 2},
  {28, 8, 2},
  {225, 8, 2},
  {30, 8, 2},
  {31, 8, 2},
  {32, 9, 2},
  {245, 8, 3},
  {10, 8, 3},
  {11, 8, 3},
  {244, 8, 3},
  {9, 8, 3},
  {246, 8, 3},
  {247, 8, 3},
  {8, 8, 3},
  {13, 8, 3},
  {242, 8, 3},
  {243, 8, 3},
  {12, 8, 3},
  {241, 8, 3},
  {14, 8, 3},
  {15, 8, 3},
  {240, 8, 3},
  {5, 8, 4},
  {250, 8, 4},
  {251, 8, 4},
  {4, 8, 4},
  {249, 8, 4},
  {6, 8, 4},
  {7, 8, 4},
  {248, 8, 4},
  {253, 9, 0},
  {258, 9, 0},
  {259, 9, 0},
  {252, 9, 0},
  {385, 9, 1},
  {126, 9, 1},
  {63, 9, 2},
  {480, 9, 3},
  {85, 8, 0},
  {170, 8, 0},
  {171, 8, 0},
  {84, 8, 0},
  {169, 8, 0},
  {86, 8, 0},
  {87, 8, 0},
  {168, 8, 0},
  {173, 8, 0},
  {82, 8, 0},
  {83, 8, 0},
  {172, 8, 0},
  {81, 8, 0},
  {174, 8, 0},
  {175, 8, 0},
  {80, 8, 0},
  {165, 8, 0},
  {90, 8, 0},
  {91, 8, 0},
  {164, 8, 0},
  {89, 8, 0},
  {166, 8, 0},
  {167, 8, 0},
  {88, 8, 0},
  {93, 8, 0},
  {162, 8, 0},
  {163, 8, 0},
  {92, 8, 0},
  {161, 8, 0},
  {94, 8, 0},
  {95, 8, 0},
  {160, 9, 0},
  {181, 8, 0},
  {74, 8, 0},
  {75, 8, 0},
  {180, 8, 0},
  {73, 8, 0},
  {182, 8, 0},
  {183, 8, 0},
  {72, 8, 0},
  {77, 8, 0},
  {178, 8, 0},
  {179, 8, 0},
  {76, 8, 0},
  {177, 8, 0},
  {78, 8, 0},
  {79, 8, 0},
  {176, 8, 0},
  {69, 8, 0},
  {186, 8, 0},
  {187, 8, 0},
  {68, 8, 0},
  {185, 8, 0},
  {70, 8, 0},
  {71, 8, 0},
  {184, 8, 0},
  {189, 8, 0},
  {66, 8, 0},
  {67, 8, 0},
  {188, 8, 0},
  {65, 8, 0},
  {190, 8, 0},
  {191, 9, 0},
  {352, 9, 0},
  {149, 8, 0},
  {106, 8, 0},
  {107, 8, 0},
  {148, 8, 0},
  {105, 8, 0},
  {150, 8, 0},
  {151, 8, 0},
  {104, 8, 0},
  {109, 8, 0},
  {146, 8, 0},
  {147, 8, 0},
  {108, 8, 0},
  {145, 8, 0},
  {110, 8, 0},
  {111, 8, 0},
  {144, 8, 0},
  {101, 8, 0},
  {154, 8, 0},
  {155, 8, 0},
  {100, 8, 0},
  {153, 8, 0},
  {102, 8, 0},
  {103, 8, 0},
  {152, 8, 0},
  {157, 8, 0},
  {98, 8, 0},
  {99, 8, 0},
  {156, 8, 0},
  {97, 8, 0},
  {158, 8, 0},
  {159, 8, 0},
  {288, 9, 0},
  {117, 8, 0},
  {138, 8, 0},
  {139, 8, 0},
  {116, 8, 0},
  {137, 8, 0},
  {118, 8, 0},
  {119, 8, 0},
  {136, 8, 0},
  {141, 8, 0},
  {114, 8, 0},
  {115, 8, 0},
  {140, 8, 0},
  {113, 8, 0},
  {142, 8, 0},
  {143, 8, 0},
  {112, 8, 0},
  {133, 8, 0},
  {122, 8, 0},
  {123, 8, 0},
  {132, 8, 0},
  {121, 8, 0},
  {134, 8, 0},
  {135, 8, 0},
  {120, 8, 0},
  {125, 8, 0},
  {130, 8, 0},
  {131, 8, 0},
  {124, 8, 0},
  {129, 9, 0},
  {382, 9, 0},
  {319, 9, 0},
  {224, 9, 0},
  {213, 8, 1},
  {42, 8, 1},
  {43, 8, 1},
  {212, 8, 1},
  {41, 8, 1},
  {214, 8, 1},
  {215, 8, 1},
  {40, 8, 1},
  {45, 8, 1},
  {210, 8, 1},
  {211, 8, 1},
  {44, 8, 1},
  {209, 8, 1},
  {46, 8, 1},
  {47, 8, 1},
  {208, 8, 1},
  {37, 8, 1},
  {218, 8, 1},
  {219, 8, 1},
  {36, 8, 1},
  {217, 8, 1},
  {38, 8, 1},
  {39, 8, 1},
  {216, 8, 1},
  {221, 8, 1},
  {34, 8, 1},
  {35, 8, 1},
  {220, 8, 1},
  {33, 8, 1},
  {222, 8, 1},
  {223, 8, 1},
  {416, 9, 1},
  {53, 8, 1},
  {202, 8, 1},
  {203, 8, 1},
  {52, 8, 1},
  {201, 8, 1},
  {54, 8, 1},
  {55, 8, 1},
  {200, 8, 1},
  {205, 8, 1},
  {50, 8, 1},
  {51, 8, 1},
  {204, 8, 1},
  {49, 8, 1},
  {206, 8, 1},
  {207, 8, 1},
  {48, 8, 1},
  {197, 8, 1},
  {58, 8, 1},
  {59, 8, 1},
  {196, 8, 1},
  {57, 8, 1},
  {198, 8, 1},
  {199, 8, 1},
  {56, 8, 1},
  {61, 8, 1},
  {194, 8, 1},
  {195, 8, 1},
  {60, 8, 1},
  {193, 8, 1},
  {62, 8, 1},
  {447, 9, 1},
  {96, 9, 1},
  {21, 8, 2},
  {234, 8, 2},
  {235, 8, 2},
  {20, 8, 2},
  {233, 8, 2},
  {22, 8, 2},
  {23, 8, 2},
  {232, 8, 2},
  {237, 8, 2},
  {18, 8, 2},
  {19, 8, 2},
  {236, 8, 2},
  {17, 8, 2},
  {238, 8, 2},
  {239, 8, 2},
  {16, 8, 2},
  {229, 8, 2},
  {26, 8, 2},
  {27, 8, 2},
  {228, 8, 2},
  {25, 8, 2},
  {230, 8, 2},
  {231, 8, 2},
  {24, 8, 2},
  {29, 8, 2},
  {226, 8, 2},
  {227, 8, 2},
  {28, 8, 2},
  {225, 8, 2},
  {30, 8, 2},
  {31, 8, 2},
  {32, 9, 2},
  {245, 8, 3},
  {10, 8, 3},
  {11, 8, 3},
  {244, 8, 3},
  {9, 8, 3},
  {246, 8, 3},
  {247, 8, 3},
  {8, 8, 3},
  {13, 8, 3},
  {242, 8, 3},
  {243, 8, 3},
  {12, 8, 3},
  {241, 8, 3},
  {14, 8, 3},
  {15, 8, 3},
  {240, 8, 3},
  {5, 8, 4},
  {250, 8, 4},
  {251, 8, 4},
  {4, 8, 4},
  {249, 8, 4},
  {6, 8, 4},
  {7, 8, 4},
  {248, 8, 4},
  {253, 9, 0},
  {258, 9, 0},
  {259, 9, 0},
  {252, 9, 0},
  {385, 9, 1},
  {126, 9, 1},
  {63, 9, 2},
  {480, 9, 3},
  {85, 8, 0},
  {170, 8, 0},
  {171, 8, 0},
  {84, 8, 0},
  {169, 8, 0},
  {86, 8, 0},
  {87, 8, 0},
  {168, 8, 0},
  {173, 8, 0},
  {82, 8, 0},
  {83, 8, 0},
  {172, 8, 0},
  {81, 8, 0},
  {174, 8, 0},
  {175, 8, 0},
  {80, 8, 0},
  {165, 8, 0},
  {90, 8, 0},
  {91, 8, 0},
  {164, 8, 0},
  {89, 8, 0},
  {166, 8, 0},
  {167, 8, 0},
  {88, 8, 0},
  {93, 8, 0},
  {162, 8, 0},
  {163, 8, 0},
  {92, 8, 0},
  {161, 8, 0},
  {94, 8, 0},
  {95, 8, 0},
  {160, 9, 0},
  {181, 8, 0},
  {74, 8, 0},
  {75, 8, 0},
  {180, 8, 0},
  {73, 8, 0},
  {182, 8, 0},
  {183, 8, 0},
  {72, 8, 0},
  {77, 8, 0},
  {178, 8, 0},
  {179, 8, 0},
  {76, 8, 0},
  {177, 8, 0},
  {78, 8, 0},
  {79, 8, 0},
  {176, 8, 0},
  {69, 8, 0},
  {186, 8, 0},
  {187, 8, 0},
  {68, 8, 0},
  {185, 8, 0},
  {70, 8, 0},
  {71, 8, 0},
  {184, 8, 0},
  {189, 8, 0},
  {66, 8, 0},
  {67, 8, 0},
  {188, 8, 0},
  {65, 8, 0},
  {190, 8, 0},
  {191, 9, 0},
  {352, 9, 0},
  {149, 8, 0},
  {106, 8, 0},
  {107, 8, 0},
  {148, 8, 0},
  {105, 8, 0},
  {150, 8, 0},
  {151, 8, 0},
  {104, 8, 0},
  {109, 8, 0},
  {146, 8, 0},
  {147, 8, 0},
  {108, 8, 0},
  {145, 8, 0},
  {110, 8, 0},
  {111, 8, 0},
  {144, 8, 0},
  {101, 8, 0},
  {154, 8, 0},
  {155, 8, 0},
  {100, 8, 0},
  {153, 8, 0},
  {102, 8, 0},
  {103, 8, 0},
  {152, 8, 0},
  {157, 8, 0},
  {98, 8, 0},
  {99, 8, 0},
  {156, 8, 0},
  {97, 8, 0},
  {158, 8, 0},
  {159, 8, 0},
  {288, 9, 0},
  {117, 8, 0},
  {138, 8, 0},
  {139, 8, 0},
  {116, 8, 0},
  {137, 8, 0},
  {118, 8, 0},
  {119, 8, 0},
  {136, 8, 0},
  {141, 8, 0},
  {114, 8, 0},
  {115, 8, 0},
  {140, 8, 0},
  {113, 8, 0},
  {142, 8, 0},
  {143, 8, 0},
  {112, 8, 0},
  {133, 8, 0},
  {122, 8, 0},
  {123, 8, 0},
  {132, 8, 0},
  {121, 8, 0},
  {134, 8, 0},
  {135, 8, 0},
  {120, 8, 0},
  {125, 8, 0},
  {130, 8, 0},
  {131, 8, 0},
  {124, 8, 0},
  {129, 9, 0},
  {382, 9, 0},
  {319, 9, 0},
  {224, 9, 0},
  {213, 8, 1},
  {42, 8, 1},
  {43, 8, 1},
  {212, 8, 1},
  {41, 8, 1},
  {214, 8, 1},
  {215, 8, 1},
  {40, 8, 1},
  {45, 8, 1},
  {210, 8, 1},
  {211, 8, 1},
  {44, 8, 1},
  {209, 8, 1},
  {46, 8, 1},
  {47, 8, 1},
  {208, 8, 1},
  {37, 8, 1},
  {218, 8, 1},
  {219, 8, 1},
  {36, 8, 1},
  {217, 8, 1},
  {38, 8, 1},
  {39, 8, 1},
  {216, 8, 1},
  {221, 8, 1},
  {34, 8, 1},
  {35, 8, 1},
  {220, 8, 1},
  {33, 8, 1},
  {222, 8, 1},
  {223, 8, 1},
  {416, 9, 1},
  {53, 8, 1},
  {202, 8, 1},
  {203, 8, 1},
  {52, 8, 1},
  {201, 8, 1},
  {54, 8, 1},
  {55, 8, 1},
  {200, 8, 1},
  {205, 8, 1},
  {50, 8, 1},
  {51, 8, 1},
  {204, 8, 1},
  {49, 8, 1},
  {206, 8, 1},
  {207, 8, 1},
  {48, 8, 1},
  {197, 8, 1},
  {58, 8, 1},
  {59, 8, 1},
  {196, 8, 1},
  {57, 8, 1},
  {198, 8, 1},
  {199, 8, 1},
  {56, 8, 1},
  {61, 8, 1},
  {194, 8, 1},
  {195, 8, 1},
  {60, 8, 1},
  {193, 8, 1},
  {62, 8, 1},
  {447, 9, 1},
  {96, 9, 1},
  {21, 8, 2},
  {234, 8, 2},
  {235, 8, 2},
  {20, 8, 2},
  {233, 8, 2},
  {22, 8, 2},
  {23, 8, 2},
  {232, 8, 2},
  {237, 8, 2},
  {18, 8, 2},
  {19, 8, 2},
  {236, 8, 2},
  {17, 8, 2},
  {238, 8, 2},
  {239, 8, 2},
  {16, 8, 2},
  {229, 8, 2},
  {26, 8, 2},
  {27, 8, 2},
  {228, 8, 2},
  {25, 8, 2},
  {230, 8, 2},
  {231, 8, 2},
  {24, 8, 2},
  {29, 8, 2},
  {226, 8, 2},
  {227, 8, 2},
  {28, 8, 2},
  {225, 8, 2},
  {30, 8, 2},
  {31, 8, 2},
  {32, 9, 2},
  {245, 8, 3},
  {10, 8, 3},
  {11, 8, 3},
  {244, 8, 3},
  {9, 8, 3},
  {246, 8, 3},
  {247, 8, 3},
  {8, 8, 3},
  {13, 8, 3},
  {242, 8, 3},
  {243, 8, 3},
  {12, 8, 3},
  {241, 8, 3},
  {14, 8, 3},
  {15, 8, 3},
  {240, 8, 3},
  {5, 8, 4},
  {250, 8, 4},
  {251, 8, 4},
  {4, 8, 4},
  {249, 8, 4},
  {6, 8, 4},
  {7, 8, 4},
  {248, 8, 4},
  {253, 9, 0},
  {258, 9, 0},
  {259, 9, 0},
  {252, 9, 0},
  {385, 9, 1},
  {126, 9, 1},
  {63, 9, 2},
  {480, 9, 3},
  {85, 8, 0},
  {170, 8, 0},
  {171, 8, 0},
  {84, 8, 0},
  {169, 8, 0},
  {86, 8, 0},
  {87, 8, 0},
  {168, 8, 0},
  {173, 8, 0},
  {82, 8, 0},
  {83, 8, 0},
  {172, 8, 0},
  {81, 8, 0},
  {174, 8, 0},
  {175, 8, 0},
  {80, 8, 0},
  {165, 8, 0},
  {90, 8, 0},
  {91, 8, 0},
  {164, 8, 0},
  {89, 8, 0},
  {166, 8, 0},
  {167, 8, 0},
  {88, 8, 0},
  {93, 8, 0},
  {162, 8, 0},
  {163, 8, 0},
  {92, 8, 0},
  {161, 8, 0},
  {94, 8, 0},
  {95, 8, 0},
  {160, 9, 0},
  {181, 8, 0},
  {74, 8, 0},
  {75, 8, 0},
  {180, 8, 0},
  {73, 8, 0},
  {182, 8, 0},
  {183, 8, 0},
  {72, 8, 0},
  {77, 8, 0},
  {178, 8, 0},
  {179, 8, 0},
  {76, 8, 0},
  {177, 8, 0},
  {78, 8, 0},
  {79, 8, 0},
  {176, 8, 0},
  {69, 8, 0},
  {186, 8, 0},
  {187, 8, 0},
  {68, 8, 0},
  {185, 8, 0},
  {70, 8, 0},
  {71, 8, 0},
  {184, 8, 0},
  {189, 8, 0},
  {66, 8, 0},
  {67, 8, 0},
  {188, 8, 0},
  {65, 8, 0},
  {190, 8, 0},
  {191, 9, 0},
  {352, 9, 0},
  {149, 8, 0},
  {106, 8, 0},
  {107, 8, 0},
  {148, 8, 0},
  {105, 8, 0},
  {150, 8, 0},
  {151, 8, 0},
  {104, 8, 0},
  {109, 8, 0},
  {146, 8, 0},
  {147, 8, 0},
  {108, 8, 0},
  {145, 8, 0},
  {110, 8, 0},
  {111, 8, 0},
  {144, 8, 0},
  {101, 8, 0},
  {154, 8, 0},
  {155, 8, 0},
  {100, 8, 0},
  {153, 8, 0},
  {102, 8, 0},
  {103, 8, 0},
  {152, 8, 0},
  {157, 8, 0},
  {98, 8, 0},
  {99, 8, 0},
  {156, 8, 0},
  {97, 8, 0},
  {158, 8, 0},
  {159, 8, 0},
  {288, 9, 0},
  {117, 8, 0},
  {138, 8, 0},
  {139, 8, 0},
  {116, 8, 0},
  {137, 8, 0},
  {118, 8, 0},
  {119, 8, 0},
  {136, 8, 0},
  {141, 8, 0},
  {114, 8, 0},
  {115, 8, 0},
  {140, 8, 0},
  {113, 8, 0},
  {142, 8, 0},
  {143, 8, 0},
  {112, 8, 0},
  {133, 8, 0},
  {122, 8, 0},
  {123, 8, 0},
  {132, 8, 0},
  {121, 8, 0},
  {134, 8, 0},
  {135, 8, 0},
  {120, 8, 0},
  {125, 8, 0},
  {130, 8, 0},
  {131, 8, 0},
  {124, 8, 0},
  {129, 9, 0},
  {382, 9, 0},
  {319, 9, 0},
  {224, 9, 0},
  {213, 8, 1},
  {42, 8, 1},
  {43, 8, 1},
  {212, 8, 1},
  {41, 8, 1},
  {214, 8, 1},
  {215, 8, 1},
  {40, 8, 1},
  {45, 8, 1},
  {210, 8, 1},
  {211, 8, 1},
  {44, 8, 1},
  {209, 8, 1},
  {46, 8, 1},
  {47, 8, 1},
  {208, 8, 1},
  {37, 8, 1},
  {218, 8, 1},
  {219, 8, 1},
  {36, 8, 1},
  {217, 8, 1},
  {38, 8, 1},
  {39, 8, 1},
  {216, 8, 1},
  {221, 8, 1},
  {34, 8, 1},
  {35, 8, 1},
  {220, 8, 1},
  {33, 8, 1},
  {222, 8, 1},
  {223, 8, 1},
  {416, 9, 1},
  {53, 8, 1},
  {202, 8, 1},
  {203, 8, 1},
  {52, 8, 1},
  {201, 8, 1},
  {54, 8, 1},
  {55, 8, 1},
  {200, 8, 1},
  {205, 8, 1},
  {50, 8, 1},
  {51, 8, 1},
  {204, 8, 1},
  {49, 8, 1},
  {206, 8, 1},
  {207, 8, 1},
  {48, 8, 1},
  {197, 8, 1},
  {58, 8, 1},
  {59, 8, 1},
  {196, 8, 1},
  {57, 8, 1},
  {198, 8, 1},
  {199, 8, 1},
  {56, 8, 1},
  {61, 8, 1},
  {194, 8, 1},
  {195, 8, 1},
  {60, 8, 1},
  {193, 8, 1},
  {62, 8, 1},
  {447, 9, 1},
  {96, 9, 1},
  {21, 8, 2},
  {234, 8, 2},
  {235, 8, 2},
  {20, 8, 2},
  {233, 8, 2},
  {22, 8, 2},
  {23, 8, 2},
  {232, 8, 2},
  {237, 8, 2},
  {18, 8, 2},
  {19, 8, 2},
  {236, 8, 2},
  {17, 8, 2},
  {238, 8, 2},
  {239, 8, 2},
  {16, 8, 2},
  {229, 8, 2},
  {26, 8, 2},
  {27, 8, 2},
  {228, 8, 2},
  {25, 8, 2},
  {230, 8, 2},
  {231, 8, 2},
  {24, 8, 2},
  {29, 8, 2},
  {226, 8, 2},
  {227, 8, 2},
  {28, 8, 2},
  {225, 8, 2},
  {30, 8, 2},
  {31, 8, 2},
  {32, 9, 2},
  {245, 8, 3},
  {10, 8, 3},
  {11, 8, 3},
  {244, 8, 3},
  {9, 8, 3},
  {246, 8, 3},
  {247, 8, 3},
  {8, 8, 3},
  {13, 8, 3},
  {242, 8, 3},
  {243, 8, 3},
  {12, 8, 3},
  {241, 8, 3},
  {14, 8, 3},
  {15, 8, 3},
  {240, 8, 3},
  {5, 8, 4},
  {250, 8, 4},
  {251, 8, 4},
  {4, 8, 4},
  {249, 8, 4},
  {6, 8, 4},
  {7, 8, 4},
  {248, 8, 4},
  {253, 9, 0},
  {258, 9, 0},
  {259, 9, 0},
  {252, 9, 0},
  {385, 9, 1},
  {126, 9, 1},
  {63, 9, 2},
  {480, 9, 3},
  {85, 8, 0},
  {170, 8, 0},
  {171, 8, 0},
  {84, 8, 0},
  {169, 8, 0},
  {86, 8, 0},
  {87, 8, 0},
  {168, 8, 0},
  {173, 8, 0},
  {82, 8, 0},
  {83, 8, 0},
  {172, 8, 0},
  {81, 8, 0},
  {174, 8, 0},
  {175, 8, 0},
  {80, 8, 0},
  {165, 8, 0},
  {90, 8, 0},
  {91, 8, 0},
  {164, 8, 0},
  {89, 8, 0},
  {166, 8, 0},
  {167, 8, 0},
  {88, 8, 0},
  {93, 8, 0},
  {162, 8, 0},
  {163, 8, 0},
  {92, 8, 0},
  {161, 8, 0},
  {94, 8, 0},
  {95, 8, 0},
  {160, 9, 0},
  {181, 8, 0},
  {74, 8, 0},
  {75, 8, 0},
  {180, 8, 0},
  {73, 8, 0},
  {182, 8, 0},
  {183, 8, 0},
  {72, 8, 0},
  {77, 8, 0},
  {178, 8, 0},
  {179, 8, 0},
  {76, 8, 0},
  {177, 8, 0},
  {78, 8, 0},
  {79, 8, 0},
  {176, 8, 0},
  {69, 8, 0},
  {186, 8, 0},
  {187, 8, 0},
  {68, 8, 0},
  {185, 8, 0},
  {70, 8, 0},
  {71, 8, 0},
  {184, 8, 0},
  {189, 8, 0},
  {66, 8, 0},
  {67, 8, 0},
  {188, 8, 0},
  {65, 8, 0},
  {190, 8, 0},
  {191, 9, 0},
  {352, 9, 0},
  {149, 8, 0},
  {106, 8, 0},
  {107, 8, 0},
  {148, 8, 0},
  {105, 8, 0},
  {150, 8, 0},
  {151, 8, 0},
  {104, 8, 0},
  {109, 8, 0},
  {146, 8, 0},
  {147, 8, 0},
  {108, 8, 0},
  {145, 8, 0},
  {110, 8, 0},
  {111, 8, 0},
  {144, 8, 0},
  {101, 8, 0},
  {154, 8, 0},
  {155, 8, 0},
  {100, 8, 0},
  {153, 8, 0},
  {102, 8, 0},
  {103, 8, 0},
  {152, 8, 0},
  {157, 8, 0},
  {98, 8, 0},
  {99, 8, 0},
  {156, 8, 0},
  {97, 8, 0},
  {158, 8, 0},
  {159, 8, 0},
  {288, 9, 0},
  {117, 8, 0},
  {138, 8, 0},
  {139, 8, 0},
  {116, 8, 0},
  {137, 8, 0},
  {118, 8, 0},
  {119, 8, 0},
  {136, 8, 0},
  {141, 8, 0},
  {114, 8, 0},
  {115, 8, 0},
  {140, 8, 0},
  {113, 8, 0},
  {142, 8, 0},
  {143, 8, 0},
  {112, 8, 0},
  {133, 8, 0},
  {122, 8, 0},
  {123, 8, 0},
  {132, 8, 0},
  {121, 8, 0},
  {134, 8, 0},
  {135, 8, 0},
  {120, 8, 0},
  {125, 8, 0},
  {130, 8, 0},
  {131, 8, 0},
  {124, 8, 0},
  {129, 9, 0},
  {382, 9, 0},
  {319, 9, 0},
  {224, 9, 0},
  {213, 8, 1},
  {42, 8, 1},
  {43, 8, 1},
  {212, 8, 1},
  {41, 8, 1},
  {214, 8, 1},
  {215, 8, 1},
  {40, 8, 1},
  {45, 8, 1},
  {210, 8, 1},
  {211, 8, 1},
  {44, 8, 1},
  {209, 8, 1},
  {46, 8, 1},
  {47, 8, 1},
  {208, 8, 1},
  {37, 8, 1},
  {218, 8, 1},
  {219, 8, 1},
  {36, 8, 1},
  {217, 8, 1},
  {38, 8, 1},
  {39, 8, 1},
  {216, 8, 1},
  {221, 8, 1},
  {34, 8, 1},
  {35, 8, 1},
  {220, 8, 1},
  {33, 8, 1},
  {222, 8, 1},
  {223, 8, 1},
  {416, 9, 1},
  {53, 8, 1},
  {202, 8, 1},
  {203, 8, 1},
  {52, 8, 1},
  {201, 8, 1},
  {54, 8, 1},
  {55, 8, 1},
  {200, 8, 1},
  {205, 8, 1},
  {50, 8, 1},
  {51, 8, 1},
  {204, 8, 1},
  {49, 8, 1},
  {206, 8, 1},
  {207, 8, 1},
  {48, 8, 1},
  {197, 8, 1},
  {58, 8, 1},
  {59, 8, 1},
  {196, 8, 1},
  {57, 8, 1},
  {198, 8, 1},
  {199, 8, 1},
  {56, 8, 1},
  {61, 8, 1},
  {194, 8, 1},
  {195, 8, 1},
  {60, 8, 1},
  {193, 8, 1},
  {62, 8, 1},
  {447, 9, 1},
  {96, 9, 1},
  {21, 8, 2},
  {234, 8, 2},
  {235, 8, 2},
  {20, 8, 2},
  {233, 8, 2},
  {22, 8, 2},
  {23, 8, 2},
  {232, 8, 2},
  {237, 8, 2},
  {18, 8, 2},
  {19, 8, 2},
  {236, 8, 2},
  {17, 8, 2},
  {238, 8, 2},
  {239, 8, 2},
  {16, 8, 2},
  {229, 8, 2},
  {26, 8, 2},
  {27, 8, 2},
  {228, 8, 2},
  {25, 8, 2},
  {230, 8, 2},
  {231, 8, 2},
  {24, 8, 2},
  {29, 8, 2},
  {226, 8, 2},
  {227, 8, 2},
  {28, 8, 2},
  {225, 8, 2},
  {30, 8, 2},
  {31, 8, 2},
  {32, 9, 2},
  {245, 8, 3},
  {10, 8, 3},
  {11, 8, 3},
  {244, 8, 3},
  {9, 8, 3},
  {246, 8, 3},
  {247, 8, 3},
  {8, 8, 3},
  {13, 8, 3},
  {242, 8, 3},
  {243, 8, 3},
  {12, 8, 3},
  {241, 8, 3},
  {14, 8, 3},
  {15, 8, 3},
  {240, 8, 3},
  {5, 8, 4},
  {250, 8, 4},
  {251, 8, 4},
  {4, 8, 4},
  {249, 8, 4},
  {6, 8, 4},
  {7, 8, 4},
  {248, 8, 4},
  {253, 9, 0},
  {258, 9, 0},
  {259, 9, 0},
  {252, 9, 0},
  {385, 9, 1},
  {126, 9, 1},
  {63, 9, 2},
  {480, 9, 3},
};