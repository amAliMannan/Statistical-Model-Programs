#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

int main() {
    srand(time(NULL));
    int success = 0;
    int all = 0;

    for (int i = 0; i < 100; i++) {

        all++;
        int S;
        int L;
        int r0 = rand() % 101;
        int r1 = rand() % 101;
        int r2 = rand() % 101;

        if ( r1 < 30 ) {
            S = 1;
        } else {
            S = 0;
        }

        if (r2 < 40) {
            L = 1;
        } else {
            L = 0;
        }
        
        if ( r0 < 35 ) {
            S = 0;
            L = 0;
        }

        if (S == 1 && L == 1) {
            success++;
        }

    }

    printf("\nsuccesses: %d\n attempts: %d\nprobabiltiy: %f\n", success, all, success * 1.0 / all);

    return 0;
}