#include<stdio.h>
int main(){
    int i,marks[6];
    for(i=0;i<6;i++)
    {
        printf("Enter sub%d Marks",i+1);
        scanf("%d",&marks[i]);
    }
    printf("The Marks are : ");
    for(i=0;i<6;i++)
    {
        printf("%d\t",marks[i]);

    }
}