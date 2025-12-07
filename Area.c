#include<stdio.h>
#define PI 3.14 
int main (){
    float r,l,b,base,h,s;
    float circle,rectangle,triangle,square;
    printf("enter the values of radius ,length,breadth,base,height,side ");
    scanf("%f %f %f %f %f %f",&r,&s,&l,&b,&base,&h);
    circle = PI*r*r;
    printf("Circle is %f",circle);
    square = s*s;
    printf("square is %f",square);
    rectangle = l*b;
    printf("Rectangle is %f",rectangle);
    triangle = 0.5*base*h;
    printf("Trianagle is %f",triangle);
    return 0;
}