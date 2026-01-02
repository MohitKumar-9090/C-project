#include <stdio.h>

int main() {
    int i, j;
    int n = 5;

    for (i = 0; i < n; i++) {
       
        for (j = 0; j < 4 * n; j++) {
          
            if (j == i) {
                printf("*");
            } 
            else if (j == (2 * n) - 1 - i) {
                printf("*");
            } 
            else if (j == (2 * n) + i) {
                printf("*");
            } 
            else if (j == (4 * n) - 1 - i) {
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