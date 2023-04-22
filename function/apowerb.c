#include<stdio.h>

// int power(int a,int b)
// {
//     int fact=1;
//     for(int i=1;i<=b;i++)
//     {
//         fact=fact*a;
//     }
//      return fact;
// }

int power(int a,int b)
{
    int fact=1;
    if(b==1) return;
    fact=a*power(a,b-1);
    return fact;
}
int main()
{
  int a,b;
  printf("a raise to power b\n");
  printf("Enter a and b: ");
  scanf("%d%d",&a,&b);
  int res=power(a,b);
  printf("%d",res);
return 0;
}