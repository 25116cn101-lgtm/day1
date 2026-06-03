#include <stdio.h>

int main() {
    int num, count = 0;

    printf("Enter number: ");
    scanf("%d", &num);

    while (num > 0) {

        // check last bit
        if (num % 2 == 1) {
            count++;
        }

        num = num / 2;
    }

    printf("Total set bits = %d", count);

    return 0;
}