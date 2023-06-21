#include<stdio.h>
int main()
{
    int arr1[3][3],arr2[3][3],result[3][3];
    printf("Enter first matrix elements \n");
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            scanf("%d",&arr1[i][j]);
    printf("Enter second matrix elements \n");
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            scanf("%d",&arr2[i][j]);
    printf("The sum of two matrix is \n");
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            result[i][j]=arr1[i][j]+arr2[i][j];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
            printf("%d ",result[i][j]);
        printf("\n");
    }
}