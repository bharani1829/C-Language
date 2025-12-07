//strcat
#include <stdio.h>
#include <string.h>
int main(){
    char str1[20] = "Aditya  ";
    char str2[] = "University";
    strcat(str1, str2);
    printf("Concatenated String: %s\n", str1);
    return 0;
}