//compound intrest
#include<stdio.h>
#include<math.h>
int main()
{
    float p,t,r,ci;
    printf("ENTER PRINCIPLE AMOUNT,TIME & RATE OF INTREST : ");
    scanf("%f%f%f",&p,&t,&r);
    ci = p*pow(1+r/100,t)-p;
    printf("THE COMPOUND INTEREST IS = %.2f\n",ci);
    return 0;
}