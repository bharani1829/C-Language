// write program to find the roots of quadratic equation
#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, disc, root1, root2, real, img;
    printf("enter a,b,c values: ");
    scanf("%f%f%f", &a, &b, &c);
    disc = b * b - 4 * a * c;
    if (disc > 0)
    {
        root1 = (-b + sqrt(disc)) / (2 * a);
        root2 = (-b - sqrt(disc)) / (2 * a);
        printf("Root1 = %.2f\n", root1);
        printf("Root2 = %.2f\n", root2);
    }
    else if (disc == 0)
    {
        root1 = -b / (2 * a);
        root2 = -b / (2 * a);
        printf("%f \t%f",root1,root2);
    }
    else
    {
        real = -b / (2 * a);
        img = sqrt(-disc) / (2 * a);
        printf("Roots are complex and different.\n");
        printf("Root1 = %.2f + %.2fi\n", real, img);
        printf("Root2 = %.2f - %.2fi\n", real, img);
    }
    return 0;
}
