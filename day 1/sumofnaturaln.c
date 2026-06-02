#include <stdio.h>

int main()
{
    int n, i;
    int sum = 0;

    // Input
    printf("Enter the value of N: ");
    scanf("%d", &n);

    // Calculate sum using loop
    for(i = 1; i <= n; i++)
    {
        sum = sum + i;
    }

    // Output
    printf("Sum of first %d natural numbers = %d\n", n, sum);

    return 0;
}