// electricity bill
#include<stdio.h>
int main()
{
    float n,cost_unit,bill;
    printf("enter a number of units consumed");
    scanf("%f",&n);
    if(n<=50)
    cost_unit=1;
    else if(n<=100)
        cost_unit = 1.50;
    else if(n<=150)
        cost_unit=2;
    else if(n<=200)
        cost_unit=2.5;
    else 
        cost_unit=3;
    bill=n*cost_unit;   
    printf("Electricity bill is: %f",bill);  
}