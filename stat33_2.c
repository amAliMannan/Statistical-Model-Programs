#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

int main() {
    srand(time(NULL));
    int success = 0;
    int all = 0;

    for (int i = 1; i <= 6; i++) {
        for (int j = 1; j <= 6; j++) {
            int total = i + j;
            if (total == 8 || (i % 2 == 0)) {
                success++;
            }
            all++;
        }
    }

    printf("\nsuccesses: %d\n attempts: %d\n", success, all);

    return 0;
}