#include<stdio.h>

int main(){

    int n, temp, rem;
    int sum = 0, fact, i;

    printf("Enter number: ");
    scanf("%d", &n);

    temp = n;

    for( ; n > 0; n = n / 10)
    {
        rem = n % 10;

        fact = 1;

        for(i = 1; i <= rem; i++)
        {
            fact = fact * i;
        }

        sum = sum + fact;
    }

    if(sum == temp)
    {
        printf("Strong Number");
    }
    else
    {
        printf("Not Strong Number");
    }

    return 0;
}