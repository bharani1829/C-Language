// functions with arguments and with return type
#include<stdio.h>
void addition(int,int);
int main()
{
    int a,b;
    printf("Enter 2 Numbers ");
    scanf("%d %d",&a,&b);
    addition(a,b);
}

void addition(int x, int y)
{
    int z;
    z = x + y;
    printf("The Sum is %d\n",z);
    
}