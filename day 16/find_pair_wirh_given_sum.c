#include <stdio.h>

int main() {
    int arr[] = {1, 4, 6, 3, 7, 9};
    int n = 6, sum = 10;

    printf("Pairs are:\n");

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] + arr[j] == sum) {
                printf("%d + %d = %d\n", arr[i], arr[j], sum);
            }
        }
    }

    return 0;
}