#include <stdio.h>

int main() {
    int n=5;
    int i, j;

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5 - i; j++) {
            printf("*");
        }
        for (j = 0; j < 2 * i; j++) {
            printf(" ");
        }
        for (j = 0; j < 5 - i; j++) {
            printf("*");
        }
        printf("\n");
    }

    for (i = 5 - 2; i >= 0; i--) {
        for (j = 0; j < 5 - i; j++) {
            printf("*");
        }
        for (j = 0; j < 2 * i; j++) {
            printf(" ");
        }
        for (j = 0; j < 5 - i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}