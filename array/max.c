#include<stdio.h>
int main()
{
    int n;
    printf("Entyer size: ");
    scanf("%d",&n);
    
    int arr[n],i;
    for(i=0;i<=n-1;i++)
    {
        printf("Enter the elemnts: ");
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    int min=arr[0];
    for(i=0;i<=n-1;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
        if(min>arr[i])
        {
            min=arr[i];
        }
    }
    printf("max: %d\n",max);
    printf("min: %d",min);

return 0;
}