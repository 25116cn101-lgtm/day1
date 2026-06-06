#include <stdio.h>

int main() {
    int i, j;

    // Reverse star pattern
    for(i = 5; i >= 1; i--) {
        for(j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}