#include <stdio.h>

int main() {
    int i, j;
    int n = 7;

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            // Top horizontal bar
            if (i == 0) {
                printf("*");
            } 
            // Center vertical bar
            else if (j == n / 2) {
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