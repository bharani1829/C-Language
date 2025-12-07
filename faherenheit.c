#include<stdio.h>
int main()
{
    float f,c,newc,newf;
    printf("Enter the temperature in celcius : ");
    scanf("%f",&c);
    newf = (c*1.8)+32;
    printf("Enter the temperature in fahrenheit : ");
    scanf("%f",&f);
    newc = (f-32)/1.8;
    printf("the tempereature in celcius and fahrenheit is %f and %f",newc,newf);
    return 0;
}