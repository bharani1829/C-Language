// minimum and maximum of two numbers without loop and conditions
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b;
    printf("EnterTwo Numbers : ");
    scanf("%d%d",&a,&b);
    int max = ((a+b)+abs(a-b))/2;
    int min = ((a+b)-abs(a-b))/2;
    printf("Max = %d,Min = %d\n",max,min);
    return 0;

}


