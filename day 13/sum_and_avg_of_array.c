#include <stdio.h>

int main() {
    int arr[100], n, i, sum = 0;
    float avg;

    // Size
    printf("Enter size: ");
    scanf("%d", &n);

    // Input
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    // Average
    avg = (float)sum / n;

    // Output
    printf("Sum = %d\n", sum);
    printf("Average = %.2f", avg);

    return 0;
}