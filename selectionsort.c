#include<stdio.h>
int main(){
    int n,i,j,min,temp=0,a[100];
    printf("Enter the size of array : ");
    scanf("%d",&n);
    printf("Enter the elements :");
    for(i=0;i<n;i++){
    scanf("%d",&a[i]);
}
for(i=0;i<n;i++){
    min=i;
    for(j=i+1;j<n;j++)
    {
        if(a[j]<a[min])
        {
            min=j;
        }
    }
    temp=a[i];
    a[i]=a[min];
    a[min]=temp;
}
printf("the sorted array is : ");
for(i=0;i<n;i++){
    printf("%d\t",a[i]);
}


}