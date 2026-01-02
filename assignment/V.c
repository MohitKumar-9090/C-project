#include <stdio.h>

int main() {
    int i, j;
    int n = 7;

    for (i = 0; i < n; i++) {
        // The width of the V pattern is 2 * n - 1
        for (j = 0; j < 2 * n; j++) {
            // Left diagonal line (j equals row index)
            if (j == i) {
                printf("*");
            } 
            // Right diagonal line (j equals the mirrored position)
            else if (j == 2 * n - i - 1) {
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