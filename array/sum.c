#include<stdio.h>
int main()
{  
  int arr[5],sum=0;

  for(int i=0;i<=4;i++)
  {
      printf("Enter elements: ");
      scanf("%d",&arr[i]);
      sum=sum+arr[i];
  }
  float avg=sum/5;
 printf("The sum is: %d\n",sum);
return 0;
}