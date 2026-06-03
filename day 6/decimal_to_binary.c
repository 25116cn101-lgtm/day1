#include <stdio.h>

int main() {
    int num, binary[32], i = 0;

    printf("Enter decimal number: ");
    scanf("%d", &num);

    int temp = num;

    // converting to binary
    while (temp > 0) {
        binary[i] = temp % 2;
        temp = temp / 2;
        i++;
    }

    printf("Binary = ");

    // printing in reverse order
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }

    return 0;
}