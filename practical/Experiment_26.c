#include <stdio.h>

// Function definition
long calculateFactorial(int n) {
    long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact = fact * i;
    }
    return fact;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Function call
        long result = calculateFactorial(num);
        printf("Factorial of %d is: %ld\n", num, result);
    }
    return 0;
}