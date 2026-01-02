#include <stdio.h>

int main() {
    int i, j;
    int n = 7;

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            // Left and right vertical bars (excluding the bottom row)
            if ((j == 0 || j == n - 1) && i < n - 1) {
                printf("*");
            }
            // Bottom horizontal curve (excluding the corners)
            else if (i == n - 1 && j > 0 && j < n - 1) {
                printf("*");
            }
            // Print a space everywhere else
            else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}