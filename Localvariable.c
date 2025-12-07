#include<stdio.h>
void display();
int  main()
{
    int x;
    printf("enter x value");
    scanf("%d",&x);
    printf("The value of x is %d\n",x);
    display();
    // printf("the value of y is in main %d",y);

}
void display()
{
    int y;
    printf("enter y value");
    scanf("%d",&y);
    printf("the value of y in display is %d\n",y);
}