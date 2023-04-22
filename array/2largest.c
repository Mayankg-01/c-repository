#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    printf("Enter size: ");
    scanf("%d",&n);
    
    int arr[n],i;
    for(i=0;i<=n-1;i++)
    {
        printf("Enter the elemnts: ");
        scanf("%d",&arr[i]);
    }
    int max=INT_MIN,smax=INT_MIN;
    for(i=0;i<=n-1;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    
    }
    for(i=0;i<=n-1;i++)
    {
        if(arr[i]!=max && smax<arr[i])
        {
            smax=arr[i];
        }
    
    }
    printf("max: %d\n",max);
    printf("smax: %d\n",smax);
return 0;
}