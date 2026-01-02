#include <stdio.h>

int main() {
    int i, j;
    int n = 7;

    // Use 0-based indexing (i=0 to i<n)
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            // Top, middle, and bottom horizontal bars
            if (i == 0 || i == n / 2 || i == n - 1) {
                printf("*");
            } 
            // Left vertical side (Upper half, excluding top/middle bars)
            else if (i > 0 && i < n / 2 && j == 0) {
                printf("*");
            } 
            // Right vertical side (Lower half, excluding middle/bottom bars)
            else if (i > n / 2 && i < n - 1 && j == n - 1) {
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