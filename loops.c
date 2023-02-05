#include<stdio.h>
int main()
{
//   for(int i=1;i<=100;i++)
//   {
//     if(i%2!=0)
//     {
//     continue;
//     }
//     else printf("%d ",i);
//   }

//digit counter
// int n,count=0;
// printf("enter no: ");
// scanf("%d",&n);
// while(n%10!=0)
// {
//     n=n/10;
//     count=count+1;
// }
// printf("%d digit no",count);

// sum of digits 
int n,sum=0,d;
printf("enter no: ");
scanf("%d",&n);
while(n%10!=0)
{
   d=n%10;
   sum=sum+d;
   n=n/10;
}
printf("the sum is:%d",sum);
return 0;
}
