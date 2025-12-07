// program to print matric using keyboard and display
#include<stdio.h>
int mai(){
    int i,j;
    int matrix[2][3];
    printf("Enter a Matrix elements : \n");
    for(i=0;i<=1;i++)
    {
        for(j=0;j<=2;j++)
        {
            scanf("%d",&matrix[i][j]);

        }
    }
    for(i=0;i<=1;i++){
        for(j=0;j<=2;j++){
            printf("%d\t",matrix[i][j]);

        }
    }
    return 0;
}




