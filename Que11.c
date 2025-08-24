#include <stdio.h>
int main() 
{
    float grams; 
    float kilograms; 
    printf("Enter the weight in grams: ");
    scanf("%f", &grams);

    kilograms = grams / 1000;

    printf("%f grams is equal to %f kilograms.", grams, kilograms);
}
