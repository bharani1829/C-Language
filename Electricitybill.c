#include<stdio.h>
int main(){
    float bill,cost_unit,n;
    printf("Enter the number of units consumed : ");
    scanf("%f",&n);
    if(n<=50)
    cost_unit = 1.0;
    else if(n<=100)
    cost_unit = 1.5;
    else if(n<=150)
    cost_unit = 2.0;
    else if(n<=200)
    cost_unit = 2.5;
    else
    cost_unit = 3.0;
    bill = n * cost_unit;
    printf("Bill = %.2f $",bill);
    return 0;

}