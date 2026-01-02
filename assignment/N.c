#include <stdio.h>

int main() {
    int n = 7;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            // Left vertical bar (j=0)
            if (j == 0) {
                printf("*");
            }
            // Right vertical bar (j=n-1)
            else if (j == n - 1) {
                printf("*");
            }
            // Diagonal line (i=j)
            else if (i == j) {
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