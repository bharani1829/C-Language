//swap 2 numbers without using third variable
#include <stdio.h>
int main ()
{
    int a,b;
    printf("Enter A ,B : ");
    scanf("%d%d",&a,&b);
    a = a+b;
    b =a-b;
    a =a-b;
    printf("After swapping a = %d, b = %d", a, b);
    return 0;   

}