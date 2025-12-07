//convert cm into meter and kilometer 

#include<stdio.h>
int main()
{
    float cm,m,km;
    printf("Enter Length In Centimeter : ");
    scanf("%f",&cm);
    m = cm/100;
    km = cm/10000;
    printf("Length in Meters = %f And Kilometers = %f",m,km);
    return 0;

}