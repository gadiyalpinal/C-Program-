#include <stdio.h>
int main()
{
    int a,b,c;
    printf("enter 3 values: ");
    scanf("%d %d %d",&a ,&b ,&c);
    if(a == b && a == c)
        printf("all values are same.");
    else
    {
        if(a >= b && a >= c)
        printf("%d is largest.",a);
        else
        if(b >= c && b >= a)
        printf("%d is largest.",b);
        else
        printf("%d is largest.",c);
        if(a <= b && a <= c)
        printf("%d is smallest.",a);
        else
        if(b <= c && b <= a)
        printf("%d is smallest.",b);
        else
        printf("%d is smallest.",c);
    }

}