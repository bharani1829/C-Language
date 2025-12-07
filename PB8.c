//convert days into months,years,days 
#include<stdio.h>
int main()
{
    int days,years,months;
    printf("Enter Total days : ");
    scanf("%d",&days);
    years = days/365;
    days = days%365;
    months = days/30;
    days = days%30;
    printf("%d Years,%d Months,%d Days",years,months,days);
    return 0;

}