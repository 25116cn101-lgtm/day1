#include <stdio.h>

int main() {
    int arr[100], n, i, large, small;

    // Size
    printf("Enter size: ");
    scanf("%d", &n);

    // Input
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Init
    large = small = arr[0];

    // Compare
    for(i = 1; i < n; i++) {
        if(arr[i] > large)
            large = arr[i];

        if(arr[i] < small)
            small = arr[i];
    }

    // Output
    printf("Largest = %d\n", large);
    printf("Smallest = %d", small);

    return 0;
}