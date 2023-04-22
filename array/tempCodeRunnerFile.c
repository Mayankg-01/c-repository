#include<stdio.h>
int main()
{  
  int arr[10],sum=0;

  for(int i=0;i<=9;i++)
  {
      printf("Enter elements: ");
      scanf("%d",arr[i]);
      sum=sum+arr[i];
  }
 printf("The sum is:%d",sum);
return 0;
}