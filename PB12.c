//power of a number
#include<stdio.h>
#include<math.h>
int main()
{
    double base,exp,result;
    printf("Enter base and Exponent : ");
    scanf("%lf%lf",&base,&exp);
    result = pow(base,exp);
    printf("The Result is %lf",result);
    return 0;

}