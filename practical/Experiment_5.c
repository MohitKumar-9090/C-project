#include <stdio.h>
int main() {
    int x = 5, y;

    // Pre-increment
    y = ++x;  // x is incremented first, then assigned to y
    printf("After pre-increment (++x):\n");
    printf("x = %d, y = %d\n\n", x, y);
    // Reset x
    x = 5;
    // Post-increment
    y = x++;  // x is assigned to y first, then incremented
    printf("After post-increment (x++):\n");
    printf("x = %d, y = %d\n", x, y);
    return 0;
}
