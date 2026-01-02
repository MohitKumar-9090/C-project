
#include <stdio.h>
int main() {
    float price, totalBill = 0.0;
    int i;
    for (i = 1; i <= 5; i++) {
        printf("Enter price of item %d: ", i);
        scanf("%f", &price); 
        totalBill += price;  
    }
    printf("Total Bill = %.2f\n", totalBill);

    return 0;
}