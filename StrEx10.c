// program on strrev(),strlwr(),strupr()
#include <stdio.h>
#include<string.h>
int main()
{
    char s1[]= "Aditya";
    char s2[]= "University";
    printf("The reversed String is %s\n",strrev(s1));
    printf("The Uppercase String is %s\n",strupr(s2));
    printf("The Lowercase String is %s\n",strlwr(s2));
    return 0;
}