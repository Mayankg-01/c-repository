#include<stdio.h>
int main()
{
  int n;
  printf("Enter n:  ");
  scanf("%d",&n);

  for(int i=1;i<=10;i++)
  {
    for(int j=1;j<=n;j++)
    {
        printf("%d*%d=%d ",i,j,i*j);
    }
    printf("\n");
  }


return 0;
}