// programa to copy one string to another string
#include<stdio.h>
int main(){
    char s1[] = "Aditya";
    char s2[20];
    int i=0;
    while(s1[i] != '\0'){
        s2[i] = s1[i];
        i++;
    }
    s2[i] = '\0';
    printf("Copied string is: %s", s2);
    return 0;
}