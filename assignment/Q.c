#include <stdio.h>

int main() {
   
    int size = 7; 
    int i, j;

    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
           
            if ((i == 0 || i == size - 2) && j > 0 && j < size - 1) { 
                printf("*");
            }
            
            else if ((j == 0 || j == size - 1) && i > 0 && i < size - 2) {
                printf("*");
            }
            
            else if (i == size - 3 && j == size - 3) {
                printf("*");
            }
            else if (i == size - 2 && j == size - 2) {
                printf("*");
            }
            else if (i == size - 1 && j == size - 1) {
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
