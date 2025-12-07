//  program to input a string with spaces and display it
#include<stdio.h>
int main(){
    char s1[20];
    printf("Enter a string: ");
    scanf(" %[^\n]s",s1);
    printf("The string is : %s",s1);
    return 0;
}