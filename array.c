#include<stdio.h>
int main(){
    int a[6],i,sum=0;
    float avg;
    for(i=0;i<5;i++){
        printf("enter  sub %d marks : ",i+1);
        scanf("%d",&a[i]);
        sum = sum + a[i];
    }
    avg = sum/5.0;
    printf("sum is %d and avg is %f",sum,avg);
    return 0;
}