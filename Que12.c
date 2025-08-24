#include <stdio.h>
int main() 
{
    int grams,kilograms; 
    printf("Enter the weight in kilograms: ");
    scanf("%d", &kilograms);

    grams = kilograms * 1000;

    printf("%d kilograms is equal to %d grams.", kilograms,grams);
}