// string concatenation
#include<stdio.h>
int main(){
    char s1[20] = "Aditya ";
    char s2[20] = "University";
    int i,j,len = 0;
    for(i=0;s1[i]!='\0';i++){
        len++;
    }
    i = len;
    for(j=0;s2[j]!='\0';j++){
        s1[i] = s2[j];
    }
    s1[i] = '\0';
    printf("Concatenated string is: %s",s1);
    return 0;
}