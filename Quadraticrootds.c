
#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    float disc, root1, root2, real, img;

    printf("Enter the values of a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);

    disc = b*b - 4*a*c;

    if (disc > 0) {
        root1 = (-b + sqrt(disc)) / (2 * a);
        root2 = (-b - sqrt(disc)) / (2 * a);
        printf("The roots are %.2f and %.2f\n", root1, root2);
    }
    else if (disc == 0) {
        root1 = -b / (2.0 * a);
        printf("The roots are %.2f and %.2f\n", root1, root1);
    }
    else {
        real = -b / (2.0 * a);
        img = sqrt(-disc) / (2.0 * a);
        printf("The roots are %.2f + i%.2f and %.2f - i%.2f\n",
               real, img, real, img);
    }

    return 0;
}
