#include <stdio.h>

int main()
{
    int i, j, n = 5;

    for(i = 1; i <= n; i++)
    {
        // Spaces
        for(j = 1; j <= n - i; j++)
        {
            printf("  ");
        }

        // Increasing characters
        for(j = 0; j < i; j++)
        {
            printf("%c ", 'A' + j);
        }

        // Decreasing characters
        for(j = i - 2; j >= 0; j--)
        {
            printf("%c ", 'A' + j);
        }

        printf("\n");
    }

    return 0;
}