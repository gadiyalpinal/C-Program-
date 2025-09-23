#include <stdio.h>

int main() 
{
    float grossSales;
    float discountRate;
    float discountAmount;
    float netSales;

    printf("Enter gross sales: ");
    scanf("%f", &grossSales);

    if (grossSales > 20000) {
        discountRate = 0.15;
    } else if (grossSales > 10000) {
        discountRate = 0.10;
    } else {
        discountRate = 0.05;
    }

    discountAmount = grossSales * discountRate;

    netSales = grossSales - discountAmount;

    printf("Gross Sales: %.2f\n", grossSales);
    printf("Discount Rate: %.2f%%\n", discountRate * 100);
    printf("Discount Amount: %.2f\n", discountAmount);
    printf("Net Sales: %.2f\n", netSales);

    return 0;
}
