#include <stdio.h>

int main() {
    int x, n;
    long long result = 1;

    printf("Enter base number: ");
    scanf("%d", &x);

    printf("Enter power: ");
    scanf("%d", &n);

    // multiplying x, n times
    for (int i = 1; i <= n; i++) {
        result = result * x;
    }

    printf("%d^%d = %lld", x, n, result);

    return 0;
}