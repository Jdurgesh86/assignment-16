#include<stdio.h>
int main()
{
    int arr[3][3],ans[3][3];
    printf("Enter  matrix elements \n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
            ans[i][j]=0;}
    }
    printf("The uppar triangular of the matrix is :\n");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
        {
            if(j>=i)
            ans[i][j] = arr[i][j];
        }
    
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
            printf("%d ",ans[i][j]);
        printf("\n");
    }
}