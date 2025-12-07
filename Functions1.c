// functions without arguments and with return type
#include<stdio.h>
void addition();
int main()
{
    addition();
    addition();
    addition();
}

void addition()
{
    int a,b,c;
    printf("Enter a & b values ");
    scanf("%d %d",&a,&b);
    c = a+b;
    printf("The Sum is %d\n",c);

}