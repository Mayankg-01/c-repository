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

    int max=arr[0][0],min=arr[0][0],i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
           if(arr[i][j]>max)
           {
           max=arr[i][j];
           }
           if(arr[i][j]<min)
           {
           min=arr[i][j];
           }
        }
       
    }

     printf("max is: %d and i:%d,j:%d\n",max,i,j);
     printf("Min is: %d",min);


return 0;
}