 //swapping of two numbers 
#include<stdio.h>
void swap(int *,int *);
int main()
{
    int a,b;
    printf("Enter A and B values \n"); 
    scanf("%d %d",&a,&b);
    printf("Before swapping a = %d,b = %d\n",a,b);
    swap(&a,&b);
    printf("In main function,after swaping a = %d,b= %d\n",a,b);
     return 0;
}
void swap (int *a , int *b)
{
    int temp;
    temp =*a;
    *a=*b;
    *b=temp;
    printf("in swap function,after swaping a =%d,b = %d\n",*a,*b);
   
}