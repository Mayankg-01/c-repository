#include<stdio.h>
int main()
{
    int n;
    printf("Enter nxn: ");
    scanf("%d",&n);
    int arr[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("Enter the elements: ");
            scanf("%d",&arr[i][j]);
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
     
    
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
           int temp=arr[i][j];
           arr[i][j]=arr[j][i];
           arr[j][i]=temp;
        }
        //printf("\n");
    }
    printf("\n");
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
          printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
return 0;
}