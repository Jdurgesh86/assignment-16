#include<stdio.h>
int main()
{
    int arr[3][3],ans[3][3];
    printf("Enter  matrix elements \n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
            scanf("%d",&arr[i][j]);
    }
    printf("The Transpose of the matrix is :");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            ans[i][j] = arr[j][i];
    
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
            printf("%d ",ans[i][j]);
        printf("\n");
    }
}