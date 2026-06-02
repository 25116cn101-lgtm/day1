#include<stdio.h>

int main()
{
    int n;
    int first = 0, second = 1, next;
    int i;

    printf("Enter term number: ");
    scanf("%d",&n);

    if(n == 1)
    {
        printf("Nth term is %d", first);
    }
    else if(n == 2)
    {
        printf("Nth term is %d", second);
    }
    else
    {
        for(i=3; i<=n; i++)
        {
            next = first + second;
            first = second;
            second = next;
        }

        printf("Nth term is %d", next);
    }

    return 0;
}