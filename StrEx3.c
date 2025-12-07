// to find the length of a string 
#include<stdio.h>
int main(){
    char name[] = "Aditya";
    int length = 0;
    for(int i = 0; name[i] != '\0'; i++){
        length++;
    }
    printf("Length of the string is: %d", length);
    return 0;
}