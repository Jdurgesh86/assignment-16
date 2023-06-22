#include<stdio.h>
int main()
{
    int arr1[3][3],arr2[3][3],result[3][3];
    printf("Enter the first array elements: ");
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
        {
            scanf("%d",&arr1[i][j]);
            result[i][j]=0;
        }
    printf("Enter the second array elements: ");
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            scanf("%d",&arr2[i][j]);
    printf("Product of two matrices is :");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            for(int k=0;k<3;k++)
            {
                result[i][j]+=arr1[i][k]*arr2[k][j];
            }
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++)
            printf("%d ",result[i][j]);
        printf("\n");
        }
}