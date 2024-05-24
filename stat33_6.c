#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

int main() {
    srand(time(NULL));
    int success = 0;
    int true_success = 0;
    int false_success = 0;
    int true_fail = 0;
    int false_fail = 0;
    int all = 0;

    for (int i = 0; i < 100000; i++) {

        all++;
        int r0 = rand() % 101;
        int r1 = rand() % 101;
        int r2 = rand() % 101;
        int r3 = rand() % 101;

        // healthy patient
        if (r0 > 15) {

            if (r1 < 10) {
                false_success++;
            } else {
                true_fail++;
            }

        } 
        // diseased patient
        else {
            
            if (r2 < 90) {
                true_success++;
            } else {
                false_fail++;
            }

        }

    }

    //printf("\ntrue successes: %d\n attempts: %d\nprobabiltiy: %f\n", success, all, success * 1.0 / all);

    printf("\npositives: %d, true positives: %d, false positives: %d\ntotal: %d\n", true_success+false_success, true_success, false_success, all);

    return 0;
}