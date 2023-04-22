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
printf("\n");
int t[c][r];
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        {
            t[i][j]=arr[j][i];
        }
     
    }

for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        {
            printf("%d ",t[i][j]);
        }
        printf("\n");
    }
return 0;
}