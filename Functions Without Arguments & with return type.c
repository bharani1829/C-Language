#include<stdio.h>
int addition();
main()
{
	int result;
	result = addition();
	printf("The Sum is :%d",result);
	
}
int addition()
{
	int a,b,sum;
	printf("Enter the values of a and b");
	scanf("%d %d",&a,&b);
	sum = a+b;
	return sum;
}

