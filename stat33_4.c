#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

int main() {
    srand(time(NULL));
    int success = 0;
    int all = 0;
    float sum1 = 0;
    float sum2 = 0;
    int aces = 4;
    int total = 52;
    int drawn = 0;
    int withdrawn = 0;


    for (int i = 0; i < 10000000; i++) {
        all++;
        aces = 4;
        for (int j = 0; j < 13; j++) {
            if ( (rand() % (52 - j)) < (aces) ) {
                aces--;
                if (aces == 0) {
                    break;
                }
            }
        }

        if (aces <= 2) {
            success++;
        }
    }

    printf("\nsuccesses: %d\n attempts: %d\nprobabiltiy: %f\n", success, all, success * 1.0 / all);

    return 0;
}