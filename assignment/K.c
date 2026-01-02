#include <stdio.h>

int main() {
    int n = 5;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            // Left vertical bar
            if (j == 0) {
                printf("*");
            } 
            // Top diagonal arm (The user's original logic)
            else if (i <= n / 2 && j == n - i - 1) { 
                printf("*");
            } 
            // Bottom diagonal arm (The user's original logic)
            else if (i >= n / 2 && j == i) {
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