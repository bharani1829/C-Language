//program on lcm of 2 numbers
#include<stdio.h>
int LCM(int,int);
int main()
{
    int n1,n2,Result;
    printf("Enter 2 numbers ");
    scanf("%d %d",&n1,&n2);
    printf("the LCM of %d and %d is %d",n1,n2,LCM(n1,n2));
    return 0;
}
int LCM(int n1,int n2)
{
    if(n2!=0)
    return LCM(n2,n1%n2);
    else
    return n1;
}