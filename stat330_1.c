#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int* phone_number_list[100000];
    int phone_number[7];
    srand(time(NULL));

    int unique;

    phone_number[0] = 6;
    phone_number[1] = 4;
    phone_number[2] = 1;

    for (int i = 3; i < 7; i++) {
        int r = rand() % 10;
        for (int j = 0; j < i; j++) {
            if (r == phone_number[j]) {
                r = rand() % 10;
            }
        }
        phone_number[i] = r;
    }

    for (int i = 0; i < 7; i++) {
        printf("%d", phone_number[i]);
    }

    printf("\n");


    return 0;
}