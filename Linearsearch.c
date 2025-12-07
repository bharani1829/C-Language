#include<stdio.h>
int main(){
    int a[100],n,i,pos,key,found=0;
    printf("enter the size of array");
    scanf("%d",&n);
    printf("Enter %d elements :",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter the search element :");
    scanf("%d",&key);
    for(i=0;i<n;i++){
        if(key==a[i])
        {
            found=1;
            pos=i;
        }
    }
    if(found==1)
    printf("The %d found In %d potision :",key,pos);
    else
     printf("The %d Not found :",key);

}