// Functions without arguments and with return type
#include<stdio.h>
int addition();
int main()
{
    int result;
    result = addition();
    printf("The Sum is %d\n",result);
}

int addition()
{
    int a,b,sum;
    printf("Enter a & b values ");
    scanf("%d %d",&a,&b);
    sum = a+b;
    return sum;
}