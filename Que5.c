#include<stdio.h>
int main()
{
    int arr[3][3],sum=0;
    printf("Enter  matrix elements \n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
            scanf("%d",&arr[i][j]);
    }
    printf("The Transpose of the matrix is :");
    for (int i = 0; i < 3; i++)
            sum += arr[i][2-i];
    printf("The sum of left diagonal is %d",sum);
}