//program to find total marks and percentage using arrays
#include<stdio.h>
int main()
{
    int marks[6],i,sum=0,per;
    //input marks of 6 subjects
    for(i=0;i<6;i++)
    {
      printf("enter marks of subject %d: ",i+1);
      scanf("%d",&marks[i]);
    }
    for(i=0;i<6;i++)
    {
        sum = sum + marks[i];
    }
    per=(sum/600.0)*100;
    printf("the total marks:%d",sum);
    printf("the percentage:%d",per);
    
    return 0;
}
