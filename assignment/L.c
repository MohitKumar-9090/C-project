#include <stdio.h>

int main() {
    int n = 6;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            // Left vertical bar
            if (j == 0) {
                printf("*");
            }
            // Bottom horizontal bar
            else if (i == n - 1) {
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