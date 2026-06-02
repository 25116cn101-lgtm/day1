#include <stdio.h>

int main() 
{
    int number, count = 0;

    // Input
    printf("Enter a number: ");
    scanf("%d", &number);

    // Counting digits
    while(number != 0) 
    {
        number = number / 10;
        count++;
    }

    // Output
    printf("Total digits = %d\n", count);

    return 0;
}