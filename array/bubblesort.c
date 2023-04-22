#include<stdio.h>
int main()
{
  int i,j,temp;
  int a[10]={89,256,45,12,8,239,78,22,1,9};
  for(i=0;i<10;i++)
  {
    for(j=i+1;j<10;j++)
    {
        if(a[j]<a[i])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
  }

printf("Printing the sorted array\n");
for(i=0;i<10;i++)
{
    printf("%d ",a[i]);
}

return 0;
}