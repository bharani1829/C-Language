//strcpy()
#include<stdio.h>
int main(){
    char str[20] = "Good";
    char str1[20];
    strcpy(str1, str);
    puts(str1);
    return 0;
}