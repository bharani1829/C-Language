//area of circle
#include<stdio.h>
#define PI 3.14159
int main()
{
    float r,area;
    printf("Enter Radius : ");
    scanf("%f",&r);
    area = PI*r*r;              //formula for area 
    printf("Area = %.2f\n",area);
    return 0;




}