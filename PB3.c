//sum and avarage of two integers
#include<stdio.h>
int main()
{
    int a,b,sum;
    float average;
    printf("Enter A And B : ");
    scanf("%d%d",&a,&b);
    sum = a+b;
    average = sum/2.0;
    printf("Sum = %d And Average = %f",sum,average);

    return 0;
}