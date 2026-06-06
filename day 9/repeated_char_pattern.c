#include <stdio.h>

int main() {
    int i, j;
    char ch = 'A';

    // Repeated character pattern
    for(i = 1; i <= 5; i++) {
        for(j = 1; j <= i; j++) {
            printf("%c", ch);
        }

        ch++;      // Move to next character
        printf("\n");
    }

    return 0;
}