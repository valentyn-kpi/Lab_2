#include "MErr.h"
#include "common.h"
#include <stdio.h>

void ERR() {
    Vg1++;
    formattedPrint("MErr start\n");
    formattedPrint("MErr finish\n");
    Vg1--;
    Vg2 += Cg1 + Cg2;
}