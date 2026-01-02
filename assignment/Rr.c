#include <stdio.h>

int main() {
    int i, j;
   
    int n = 8; 

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            // Left vertical bar
            if (j == 1) {
                printf("*");
            }
            else if (i == 1 && j < n) {
                printf("*");
            }
            else if (i == n / 2 + 1 && j < n) {
                printf("*");
            }
            else if (j == n && i > 1 && i <= n / 2) {
                printf("*");
            }
            else if (i > n / 2 + 1 && j == i - (n / 2)) {
                printf("*");
            }
            
            else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
