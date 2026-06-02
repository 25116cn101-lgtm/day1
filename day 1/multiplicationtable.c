#include <stdio.h>

int main() 
{
    int num, i;

    // Input
    printf("Enter a number: ");
    scanf("%d", &num);

    // Table printing
    printf("\nMultiplication Table of %d\n", num);

    for(i = 1; i <= 10; i++) 
    {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}