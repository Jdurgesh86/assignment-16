#include<stdio.h>
int main()
{
    int arr[3][3],count=0,max=0,row;
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
            if(arr[i][j]==1)
                count++;
        }

        if(count>max)
            {
                row=i;
                max=count;
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
    printf("The %d row have max number of 1's",row+1);
    
}