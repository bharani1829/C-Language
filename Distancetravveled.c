#include<stdio.h>
int main(){
   float u,s,t,a;
    printf("Enter the values of initial Velocity,Time,Acceleration : ");
    scanf("%f %f %f",&u,&t,&a);
    s = u*t+0.5*a*t*t;
    printf("Distanced travelled is : %.2f",s);
    return 0;
}