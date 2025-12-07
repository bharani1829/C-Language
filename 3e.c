//to make subjects in integers and find total and average
#include <stdio.h>
int main() {
    int s1,s2,s3,s4,s5,total;
    float avg;
    printf("Enter s1,s2,s3,s4,s5 values ");
    scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
    total = s1+s2+s3+s4+s5;
    avg = total/5.0;
    printf("Total = %d \n",total);
    printf("Average = %f",avg);
    return 0;
}