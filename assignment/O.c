#include <stdio.h>

int main() {
    int n = 5;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            // Top and bottom horizontal segments (excluding corners)
            if ((i == 0 || i == n - 1) && j > 0 && j < n - 1) {
                printf("*");
            }
            // Left vertical segment (excluding corners)
            else if (j == 0 && i > 0 && i < n - 1) {
                printf("*");
            }
            // Right vertical segment (excluding corners)
            else if (j == n - 1 && i > 0 && i < n - 1) {
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