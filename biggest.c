#include<stdio.h>
int main(){
    int a,b,c,biggest;
    printf("Enter a,b,c values :");
    scanf("%d %d %d",&a,&b,&c);
    biggest = ((a>b)?(a>c)?a:c:(b>c)?b:c);
    printf("%d is biggest",biggest);
    return 0;

}