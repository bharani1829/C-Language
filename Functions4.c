// functions with arguments and with return types
#include<stdio.h>
int addition(int,int);
int main()
{
    int a,b,result;
    printf("Enter a & b values ");
    scanf("%d %d",&a,&b);
    result = addition(a,b);
    printf("The Sum is %d\n",result);
}

int addition(int x, int y)
{
    return x + y;
}