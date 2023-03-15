//
// Created by Valentyn Valentiev on 3/9/2023.
//

#include "M4.h"
#include "M3.h"
#include "common.h"
#include "MErr.h"

void M4_S9() {
    Vg1++;
    formattedPrint("M4_S9 start\n");
    ERR();
    formattedPrint("M4_S9 finish\n");
    Vg1--;
}

void M4_S10() {
    Vg1++;
    formattedPrint("M4_S10 start\n");
    M3_S8();
    formattedPrint("M4_S10 finish\n");
    Vg1--;
}