// sum of two integers without using "+" operator
#include<stdio.h>
int main()
{
    int a,b,sum;
    printf("Enter A And B : ");
    scanf("%d%d",&a,&b);
    sum = -(-a-b);
    printf("sum = %d",sum);
    return 0;




}