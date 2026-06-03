#include <stdio.h>
#include <math.h>

int main() {
    int binary, rem, decimal = 0, base = 1;

    printf("Enter binary number: ");
    scanf("%d", &binary);

    while (binary > 0) {
        rem = binary % 10;
        decimal = decimal + rem * base;

        binary = binary / 10;
        base = base * 2;
    }

    printf("Decimal = %d", decimal);

    return 0;
}