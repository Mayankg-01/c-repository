#include<stdio.h>
int count(int n)
{
    if(n==1||n==2) return n;
    int totalways=count(n-1)+count(n-2);
    return totalways;
}
int main()
{
  int n;
  printf("Enter no of steps: ");
  scanf("%d",&n);

  printf("%d",count(n));
return 0;
}