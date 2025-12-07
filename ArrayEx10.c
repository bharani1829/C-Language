//program of binary search
#include<stdio.h>
int main(){
    int a[20],i,low=0;
    int mid,high,key,pos;
    printf("Enter 10 elements in ascending order:\n");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
        high = 9;
        printf("Enter the search element: ");
        scanf("%d",&key);
        while(low<=high){
            mid=(low+high)/2;
            if(key==a[mid]){
                pos=mid;
                break;
            }
            else if(key>a[mid]){
               high=mid-1; ;
            }
            else{
               low=mid+1; ;
            }
        }
     printf("the searching element is found in %d Position",pos);
    return 0;       
    }
