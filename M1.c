//
// Created by Valentyn Valentiev on 3/9/2023.
//

#include "M1.h"
#include "common.h"
#include "MErr.h"

void S3() {
    Vg1++;
    formattedPrint("M1_S3 start\n");
    ERR();
    formattedPrint("M1_S3 finish\n");
    Vg1--;
}

void S2() {
    Vg1++;
    formattedPrint("M1_S2 start\n");
    S3();
    formattedPrint("M1_S2 finish\n");
    Vg1--;
}

void M1_S1() {
    Vg1++;
    formattedPrint("M1_S1 start\n");
    S2();
    formattedPrint("M1_S1 finish\n");
    Vg1--;
}