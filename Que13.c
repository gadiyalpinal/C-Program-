#include <stdio.h>
int main() 
{
    float bytes; 
    float kilobytes; 
    printf("Enter the number of bytes: ");
    scanf("%f", &bytes);

    kilobytes = bytes / 1000;

    printf("%f bytes is equal to %f KB.", bytes, kilobytes);
}