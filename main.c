#include "common.h"
#include "M1.h"
#include "M2.h"
#include "M3.h"
#include "MErr.h"

int main() {
    formattedPrint("MAIN start\n");
    M1_S1();
    M2_S4();
    M3_S7();
    M3_S8();
    ERR();
    formattedPrint("MAIN finish\n");
    return 0;
}