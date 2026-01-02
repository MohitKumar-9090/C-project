#include <stdio.h>

int main() {
    int n = 7; // Assuming n=7 for a standard pattern size

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            // Top horizontal bar
            if (i == 0) {
                printf("*");
            } 
            // Bottom horizontal bar
            else if (i == n - 1) {
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