#include <stdio.h>

int main() {
    int n = 9;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            // Left vertical bar
            if (j == 0) {
                printf("*");
            }
            // Right vertical bar (Corrected: 'j == n 1' to 'j == n - 1')
            else if (j == n - 1) {
                printf("*");
            }
            // First diagonal arm (Top-left to center-middle, j <= n/2)
            else if (i == j && j <= n / 2) {
                printf("*");
            }
            // Second diagonal arm (Top-right to center-middle, j >= n/2)
            else if (i + j == n - 1 && j >= n / 2) {
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