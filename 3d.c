//maximum of two numbers using conditional operator
#include <stdio.h>
int main(){
    int a,b,max;
    printf("Enter a and b values ");
    scanf("%d%d",&a,&b);
    max = (a>b)?a:b;
    printf("Maximum is %d",max);
    return 0;
}