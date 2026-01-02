#include <stdio.h>
int main() {
    int a = 10;
    float b = 3.14f;
    char c = 'A';
    double d = 20.12345;
    printf("Value of int: %d\n", a);
    printf("Size of int: %lu bytes\n\n", sizeof(a));

    printf("Value of float: %.2f\n", b);
    printf("Size of float: %lu bytes\n\n", sizeof(b));

    printf("Value of char: %c\n", c);
    printf("Size of char: %lu bytes\n\n", sizeof(c));

    printf("Value of double: %lf\n", d);
    printf("Size of double: %lu bytes\n", sizeof(d));
    return 0;
}
