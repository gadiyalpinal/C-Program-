#include <stdio.h>
void main() 
{
    int rupees;
    float dollars;
    printf("Enter the number of rupees:  ");
    scanf("%d", &rupees);
    dollars = rupees / 48;
    printf("%d Rs. is equal to %f $",rupees,dollars);
}