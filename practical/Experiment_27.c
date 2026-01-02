#include <stdio.h>

// Function to find square
int findSquare(int n) {
    return n * n;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    // Function call inside printf
    printf("The square of %d is: %d\n", num, findSquare(num));
    return 0;
}