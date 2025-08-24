#include <stdio.h>
void main() 
{
    int minutes, hours;
    printf("Enter the number of hours:  ");
    scanf("%d", &hours);
    minutes = hours * 60;
    printf("%d hours is equal to %d minutes.",hours,minutes);
}