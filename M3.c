//
// Created by Valentyn Valentiev on 3/9/2023.
//

#include "M3.h"
#include "M4.h"
#include "common.h"
#include "MErr.h"

void M3_S7()
{
    Vg1++;
    formattedPrint("M3_S7 start\n");
    M4_S9();
    formattedPrint("M3_S7 finish\n");
    Vg1--;
}

void M3_S8()
{
    Vg1++;
    formattedPrint("M3_S8 start\n");
    static int i = 0;
    if (i++ < 1)
        M4_S10();
    ERR();
    formattedPrint("M3_S8 finish\n");
    Vg1--;
}