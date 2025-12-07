// program of selection sort
#include<stdio.h>
int main(){
    int a[20],i,j,n,min;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter %d elements in array: \n",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        min=i;
        for(j=i+1;j<n;j++){
            if(a[j]<a[min]){
                min=j;
            }
        }
        int temp=a[i];
        a[i]=a[min];
        a[min]=temp;
    }
    printf("Sorted array is: \n");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}