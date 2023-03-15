//
// Created by Valentyn Valentiev on 3/9/2023.
//

#include "common.h"
#include <stdio.h>

const int Cg1 = 2, Cg2 = 1;
int Vg1 = 0, Vg2 = 0;

void formattedPrint(const char *s) {
    for (int i = 0; i < Vg1; ++i) {
        printf("%c\t", 179);
    }
    printf("%s", s);
}