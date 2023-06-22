#include<stdio.h>
int main()
{
    int arr[3][3],sumr=0,sumc=0;
    printf("Enter  matrix elements \n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
            scanf("%d",&arr[i][j]);
    }
    
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++)
        {
            sumc+=arr[i][j];
            sumr+=arr[j][i];
        }
        printf("\nsum of the %d row of matrix is %d and %d column is %d",i+1,sumr,i+1,sumc);
        sumr=0;
        sumc=0;
        }
}