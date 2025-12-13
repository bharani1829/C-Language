#include<stdio.h>
#include<string.h>
main(){
	char s[50];
	int i;
	gets(s);
	for(i=0;i<strlen(s)/2;i++)
	if(s[i]!=s[strlen(s)-i-1])
		printf("NOT A PALINDROME");
	else
	printf("PALINDROME");
	
	
	
	
	
	
}
