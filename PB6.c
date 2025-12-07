//circumference of a circle 
#include<stdio.h>
#define PI 3.14159
int main()
{
    float r,c;
    printf("Enter Radius : ");
    scanf("%f",&r);
    c = 2*PI*r;           //formula for circumference
    printf("Circumference = %0.2f",c);
    return 0;

}