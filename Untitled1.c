#include<stdio.h>
#include<string.h>
int main(){
    char s1[100]="aditya";
    char s2[100]="University";
    char s3[100];
    char s4[100]="Hello world";
    // strlen
    printf("the length of s1 is %zu\n",strlen(s1));
    // strcpy
    strcpy(s3,s1);
    printf("the copied string is %s\n",s3);
    // strcat
    strcat(s1,s2);
    printf("the concatenated string is %s\n",s1);
    // strcmp
    int result = strcmp(s1,s2);
    if(result==0){
        printf("the strings are equal\n");
    }
    else if(result<0){
        printf("s1 is less than s2\n");
    }
    else{
        printf("s1 is greater than s2\n");
    }
    //strrev
    strrev(s4);
    printf("the reversed string is %s\n",s4);
    //strupr,strlwr
     printf("the reversed string is %s\n",strlwr(s4));
      printf("the reversed string is %s\n",strupr(s4));
    return 0;
}
