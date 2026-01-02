#include <stdio.h>

int main() {

    for (int i = 1; i <= 7; i++) {

        // A
        for (int j = 1; j <= 7; j++) {
            if ((j == 1 && i > 1) || (j == 7 && i > 1) ||
                (i == 1 && j > 1 && j < 7) ||
                (i == 4 && j > 1 && j < 7))
                printf("*");
            else
                printf(" ");
        }
        printf("  ");

        // D
        for (int j = 1; j <= 7; j++) {
            if (j == 1 ||
                (i == 1 && j < 6) ||
                (i == 7 && j < 6) ||
                (j == 6 && i > 1 && i < 7))
                printf("*");
            else
                printf(" ");
        }
        printf("  ");

        // I
        for (int j = 1; j <= 7; j++) {
            if (i == 1 || i == 7 || j == 4)
                printf("*");
            else
                printf(" ");
        }
        printf("  ");

        // T
        for (int j = 1; j <= 7; j++) {
            if (i == 1 || j == 4)
                printf("*");
            else
                printf(" ");
        }
        printf("  ");

        // Y
        for (int j = 1; j <= 7; j++) {
            if ((j == i && i <= 4) ||
                (i + j == 8 && i <= 4) ||
                (j == 4 && i > 4))
                printf("*");
            else
                printf(" ");
        }
        printf("  ");

        // A again
        for (int j = 1; j <= 7; j++) {
            if ((j == 1 && i > 1) || (j == 7 && i > 1) ||
                (i == 1 && j > 1 && j < 7) ||
                (i == 4 && j > 1 && j < 7))
                printf("*");
            else
                printf(" ");
        }

        printf("\n");
    }

    return 0;
}