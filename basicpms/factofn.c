#include<stdio.h>
int fact(int a)
{
   for(int i=1;i<=a;i++)
  {
    printf("%d: ",i);
    for(int j=1;j<=i;j++)
    {
        if(i%j==0)
        printf("%d ",j);
    }
    printf("\n");
  }
}

int main()
{
  int n,table;
  printf("Enter n: ");
  scanf("%d",&n);
  table = fact(n);
    return 0;
}