#include <stdio.h> 
int main() 
{
    float l, w, a, p; 
    printf("Enter the length of the rectangle: ");
    scanf("%f", &l); 
    printf("Enter the width of the rectangle: ");
    scanf("%f", &w); 
    a = l * w;
    p = 2 * (l + w);
    printf("Area of the rectangle: %f", a);
    printf("Perimeter of the rectangle: %f", p);
}