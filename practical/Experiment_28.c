#include <stdio.h>

// Function to find the largest
int findLargest(int a, int b, int c) {
    if (a >= b && a >= c) {
        return a;
    } else if (b >= a && b >= c) {
        return b;
    } else {
        return c;
    }
}

int main() {
    int n1, n2, n3;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    int max = findLargest(n1, n2, n3);
    printf("The largest number is: %d\n", max);
    return 0;
}