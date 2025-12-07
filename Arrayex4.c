// program to print a matrix using arrays
#include<stdio.h>
int main(){
    int matrix[2][3] = {
        {3,6,9},
        {2,4,6}
    };
    for(int i=0;i<=1;i++)
    {
        for(int j=0;j<=2;j++)
        {
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }    return 0;
}

    