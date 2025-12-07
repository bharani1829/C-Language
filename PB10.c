// simple intrest and compound intrest
#include<stdio.h>
#include<math.h>
int main()
{
    float p,t,r,si;
    printf("ENTER PRINCIPLE AMOUNT,TIME & RATE OF INTREST : ");
    scanf("%f%f%f",&p,&t,&r);
    si = p*t*r/100;            //formula
    printf("THE SIMPLE INTEREST IS : %f\n",si);
}