#include<stdio.h>

int main()
{
    int r,c;
    printf("Enter rows and column: ");
    scanf("%d %d",&r,&c);
    int arr[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("Enter the elements: ");
            scanf("%d",&arr[i][j]);
        }
    }
    
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    int maxsum=0,i,j;
    for(i=0;i<r;i++)
    {
        int rowsum=0;
        for(j=0;j<c;j++)
        {
           rowsum+=arr[i][j];
        }
        if(maxsum<rowsum)
        {
            maxsum=rowsum;
            int maxrow=i;
        }
    }


    printf("max sum is:%d \ni:%d",maxsum,i);
return 0;
}