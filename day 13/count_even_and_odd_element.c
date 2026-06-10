#include <stdio.h>

int main() {
    int arr[100], n, i;
    int even = 0, odd = 0;

    // Size
    printf("Enter size: ");
    scanf("%d", &n);

    // Input
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Count
    for(i = 0; i < n; i++) {
        if(arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    // Output
    printf("Even = %d\n", even);
    printf("Odd = %d", odd);

    return 0;
}