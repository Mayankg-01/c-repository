#include<stdio.h>
int main()
{

int n;
printf("Enter size: ");
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++)
{
    printf("Enter elemts: ");
    scanf("%d",&arr[i]);
}

for(int i=0;i<n;i++)
{
    for(int j=n-1;j>0;j--)
    {
        if(arr[i]==arr[j]);
            
    }
   
}

return 0;
}