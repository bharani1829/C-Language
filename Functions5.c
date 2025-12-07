// Factorial of a number using recursion
#include <stdio.h>
int fact(int);
int main()
{
    int n,factorial;
    printf("Enter a number ");
    scanf("%d",&n);
    factorial = fact(n);
    printf("The Factorial is %d\n",factorial);
}
int fact(int m)
{
    int f;
    if (m==0)
    {
        return 1;
    }
    f = m * fact(m-1);
    return f;
}