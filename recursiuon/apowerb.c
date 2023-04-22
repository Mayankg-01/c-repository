#include<stdio.h>
int power(int a,int b)
{
    int fact=1;
    if(b==0) return 1;
    fact=a*power(a,b-1);
    return fact;
}
int main()
{
  int a,b;
  printf("Enter a and b: ");
  scanf("%d%d",&a,&b);
  int res=power(a,b);
  printf("%d raise to power %d is:%d",a,b,res);
return 0;
}