#include<stdio.h>
#include<math.h>
int main(){
    float p,t,r,si,ci;
    printf("Enter Principle amount,time,rate of intrest  ");
    scanf("%f %f %f",&p,&t,&r);
    si = (p*t*r)/100;
    ci = p *pow(1+r/100,t)-p;
    printf("Si is %f\n",si);
    printf("Ci is %f\n",ci);
    return 0;
    
}