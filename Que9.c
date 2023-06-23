#include<stdio.h>
int main()
{
    int arr[3][3],count=0;
    printf("Enter the matrix elements :");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(arr[i][j]==0)
                count++;
        }
    }
    printf("You Enter the matrix is \n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    if(count>5)
        printf("The given matrix is sparse matrix ");
    else    
        printf("The given matrix is not a sparse matrix");
    
}