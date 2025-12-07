#include<stdio.h>
int main()
{
    int i,j,low=0,mid,high,n,pos,key;
   int a[100];
    printf("Enter the size of array ");
    scanf("%d",&n);
    printf("Enter %d Elements is Ascending Order ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    high=n-1;
    printf("Enter search element : ");
    scanf("%d",&key);
    while(low<=high)
    {
        mid = (low+high)/2;
        if(key==a[mid]){
            pos=mid;
            break;
        }
        else if(key<a[mid]){
            high = mid-1;

        }
        else
        low=mid+1;
    }
    printf("The search element found in %d position ",pos);
    return 0;
    
}