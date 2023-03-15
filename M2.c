//
// Created by Valentyn Valentiev on 3/9/2023.
//

#include "M2.h"
#include "common.h"
#include "MErr.h"

void S5();

void S6()
{
    Vg1++;
    formattedPrint("M2_S6 start\n");
    static int i = 0;
    if (i++ < 1)
        S5();
    formattedPrint("M2_S6 finish\n");
    Vg1--;
}

void S5() {
    Vg1++;
    formattedPrint("M2_S5 start\n");
    S6();
    ERR();
    formattedPrint("M2_S5 finish\n");
    Vg1--;
}

void M2_S4()
{
    Vg1++;
    formattedPrint("M2_S4 start\n");
    S5();
    formattedPrint("M2_S4 finish\n");
    Vg1--;
}