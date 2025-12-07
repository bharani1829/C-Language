#include<stdio.h>
int main(){
    int n,i,j,a[20],temp=0;
    printf("Enter the range of array");
    scanf("%d",&n);
    printf("enter the %d elements : ",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        for(int j =0;j<n-i;j++){
            if(a[j]>a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("The sorted array is \n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}