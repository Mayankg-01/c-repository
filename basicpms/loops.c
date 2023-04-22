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
// int n,sum=0,d;
// printf("enter no: ");
// scanf("%d",&n);
// while(n%10!=0)
// {
//    d=n%10;
//    sum=sum+d;
//    n=n/10;
// }
// printf("the sum is:%d",sum);

//reverse of a number and its sum 
// int n,r=0,c;
// printf("Enter n: ");
// scanf("%d",&n);
// c=n;
// while(n!=0)
// {
//    r=r*10;
//    r=r+(n%10);
//    n=n/10;
// }
// printf("Reverse is: %d\n",r);
// printf("the sum these is %d",(c+r));

//1-2+3-4+5.....
// int n,sum;
// printf("enter n: ");
// scanf("%d",&n);

// for(int i=1;i<=n;i++)
// {
//  if(n%2==0)
//  sum =(-n/2);
//  else sum=(n+1)/2;
// }
// printf("the sum is: %d",sum);

//factorial til n no

// int n,fact=1;
// printf("enter n : ");
// scanf("%d",&n);
// for(int i=1;i<=n;i++)
// {
// fact=fact*i;
// printf("Factorial %d!: %d\n",i,fact);
// }

//fibonacci series

// int n1=0,n2=1,n3,n;
// printf("Enter n: ");
// scanf("%d",&n);
// printf("%d %d",n1,n2);
// for(int i=2;i<=n;i++)
// {
//    n3=n2+n1;
//    printf("%d ",n3);
//    n1=n2;
//    n2=n3;
// }

//a to the power b
// int a,b,power=1;
// printf("Enter a,b: ");
// scanf("%d%d",&a,&b);
// for(int i=1;i<=b;i++)
// {
//   power=power*a;
// }
// printf("%d ",power);

//print ASCII values
// for(int i=65;i<=90;i++)
// {
//     printf("%d--> ",i);
//     char ch=(char)i;
//     printf("%c\n",ch);
// }


//pattern printing
// int r,c;
// printf("Enter row: ");
// scanf("%d",&r);
// printf("Enter column: ");
// scanf("%d",&c);


// for(int i=1;i<=r;i++)
// {
//     for(int j=1;j<=c;j++)
//     {
//     printf("*");
//     } 
//     printf("\n");
// }

// for(int i=1;i<=4;i++)
// {
//     for(int j=1;j<=4;j++)
//     {
//         printf("%d",j);
//     }
//     printf("\n");
// }

// for(int i=1;i<=4;i++)
// {
//     for(int j=1;j<=i;j++)
//     {
//         printf("* ");
//     }
//      printf("\n");
// }

// lower triangle

// for(int i=1;i<=4;i++)
// {
//     for(int j=1;j<=5-i;j++)
//     {
//         printf("* ");
//     }
//      printf("\n");
// }


// for(int i=1;i<=4;i++)
// {
//     for(int j=1;j<=i;j++)
//     {
//         printf("%d ",j);
//     }
//      printf("\n");
// }


// 1
// 1 3
// 1 3 5
// for(int i=1;i<=4;i++)
// {
//     for(int j=1;j<=2*i;j+=2)
//     {
//         printf("%d ",j);
//     }
//     printf("\n");
// }

// for(int i=1;i<=4;i++)
// {
//     int a=1;
//     for(int j=1;j<=i;j++)
//     {
//         printf("%d ",a);
//         a=a+2;
//     }
//     printf("\n");
// }

// int n;
// printf("enter n*n: ");
// scanf("%d",&n);

// for(int i=1;i<=n;i++)
// {
//     int a=65;
//     for(int j=1;j<=n;j++)
//     {
//         printf("%c ",a);
//         a++;
//     }
//     printf("\n");
// }

// int n;
// printf("enter n*n: ");
// scanf("%d",&n);

// for(int i=1;i<=n;i++)
// {
//     int a=65;
//     for(int j=1;j<=i;j++)
//     {
//         printf("%c ",a);
//         a++;
//     }
//     printf("\n");
// }

// int n;
// printf("enter n*n: ");
// scanf("%d",&n);

// for(int i=1;i<=n;i++)
// {
//     int a=65;
//     for(int j=1;j<=i;j++)
//     {
//         if(i%2!=0)
//         {
//             printf("%d ",j);
//         }
//         else{
//             printf("%c ",a);
//             a++;
//         }
//     }
//     printf("\n");
// }


// int n;
// printf("enter row no(odd): ");
// scanf("%d",&n);

// for(int i=1;i<=n;i++)
// {
//     for(int j=1;j<=n;j++)
//     {
//         int a=(n+1)/2;
//         if(i==a || j==a)
//         {
//         printf("* ");
//         }
//         else printf(" ");
//     }
//     printf("\n");
// }

// hollow rectangle
// int r,c;
// printf("enter row: ");
// scanf("%d",&r);

// printf("enter column: ");
// scanf("%d",&c);

// for(int i=1;i<=r;i++)
// {
//     for(int j=1;j<=c;j++)
//     {
//         if((i==1 || i==r || j==1 || j==c))
//         {
//         printf("*");
//         }
//         else printf(" ");
    
//     }
//     printf("\n");
// }

// int r;
// printf("enter row: ");
// scanf("%d",&r);

// for(int i=1;i<=r;i++)
// {
//     for(int j=1;j<=r;j++)
//     {
//         if(i==j || (i+j==r+1))
//         printf("*");
//         else printf(" ");
//     }
//     printf("\n");
// }

// int r;
// printf("enter row: ");
// scanf("%d",&r);

// int a=1;
// for(int i=1;i<=r;i++)
// {
//     for(int j=1;j<=i;j++)
//     {
//         printf("%d ",a);
//         a++;
//     }
//     printf("\n");
// }

// int n,i,j;
// printf("enter n: ");
// scanf("%d",&n);

// for(i=1;i<=n;i++)
// {
//     for(j=1;j<=i;j++)
//     {
//         if((i+j)%2==0) printf("1");
//         else printf("0");
//     }
//     printf("\n");
// }

// int n,i,j;
// printf("enter n: ");
// scanf("%d",&n);

// for(i=1;i<=n;i++)
// {
//     for(j=1;j<=n;j++)
//     {
//         if((i+j)<(n+1)) printf(" ");
//         else printf("*");
//     }
//     printf("\n");
// }

// int n,i,j;
// printf("enter n: ");
// scanf("%d",&n);

// for(i=1;i<=n;i++)
// {
//     int a=65;
//     for(j=1;j<=n;j++)
//     {
//         if((i+j)<(n+1)) printf(" ");
//         else printf("%c",a++);
//     }
//     printf("\n");
// }

// int n,i,j;
// printf("enter n: ");
// scanf("%d",&n);

// for(i=1;i<=n;i++)
// {
//     for(int k=1;k<=n-i;k++)
//         {
//             printf(" ");
//         }
//     for(j=1;j<=(2*i-1);j++)
//     {
//         printf("*");
//     }
//     printf("\n");
// }

// int n,i,j;
// printf("enter n: ");
// scanf("%d",&n);

// for(i=1;i<=n;i++)
// {
//     for(int k=1;k<=n-i;k++)
//         {
//             printf(" ");
//         }
//     for(j=1;j<=(2*i-1);j++)
//     {
//         printf("%d",j);
//     }
//     printf("\n");
// }


// int n,i,j;
// printf("enter n: ");
// scanf("%d",&n);

// for(i=1;i<=n;i++)
// {
//     for(int k=1;k<=n-i;k++)
//         {
//             printf(" ");
//         }
//         int a=65;
//     for(j=1;j<=(2*i-1);j++)
//     {
//         printf("%c",a);
//         a++;
//     }
//     printf("\n");
// }

// int n,i,j;
// printf("enter n: ");
// scanf("%d",&n);

// for(int i=1;i<=n;i++)
// {
//     for(int m=1;m<=n-i;m++)
//     {
//         printf(" ");
//     }
//     for(int j=1;j<=i;j++)
//     {
//         printf("%d",j);    
//     }
//     int a=(i-1);
//     for(int k=1;k<=(i-1);k++)
//     {
//         printf("%d",a--);
//     }
//     printf("\n");
// }

// int n,i,j;
// printf("enter n: ");
// scanf("%d",&n);

// for(int i=1;i<=n;i++)
// {
//     for(int s=1;s<=n-i;s++)
//     {
//         printf(" ");
//     }
//     int d=65;
//     for(int j=1;j<=i;j++)
//     {
//        printf("%c",d++);
//     }
//     int m=65;
//     for(int k=1;k<=i-1;k++)
//     {
//         printf("%c",m);
//         m++;
//     }
//     printf("\n");
// }

//star diamond 
// int n,i;
// printf("enter n: ");
// scanf("%d",&n);
// int nsp=n/2;
// int nst=1;
// int ml=n/2+1;
// for(i=1;i<=n;i++)
// {
//     for(int j=1;j<=nsp;j++)//spaces
//     {
//     printf(" ");
//     }
// for(int k=1;k<=nst;k++)//stars
// {
//     printf("*");
// }
// if(i<ml)
// {
//     nsp--;
//     nst+=2;
// }
// else
// {
//     nsp++;
//     nst-=2;
// }
// printf("\n");
// }

// int n;
// printf("enter n: ");
// scanf("%d",&n);

// int nsp=0;
// int nst=n;
// for(int i=1;i<=n;i++)
// {
//     for(int s=1;s<=nsp;s++)
//     {
//         printf(" ");
//     }
//     for(int k=1;k<=nst;k++)
//     {
//         printf("*");
//     }
//     nsp++;
//     nst--;
//     printf("\n");
// }

// int n;
// printf("enter n: ");
// scanf("%d",&n);

// int nsp=0;
// int nst=n;
// for(int i=1;i<=n;i++)
// {
//     for(int j=1;j<=nst;j++)//stars
//     {
//         printf("*");
//     }
//     for(int s=1;s<=nsp;s++)//spaces
//     {
//         printf(" ");
//     }
//     for(int j=1;j<=nst;j++)//stars
//     {
//         printf("*");
//     }
//     nst--;
//     nsp+=2;
//     printf("\n");
// }


// int n;
// printf("enter n: ");
// scanf("%d",&n);

// int nsp=0;
// int nst=n;
// for(int i=1;i<=n;i++)
// {
//     for(int j=1;j<=nst;j++)//stars
//     {
//         printf("%d",j);
//     }
//     for(int s=1;s<=nsp;s++)//spaces
//     {
//         printf(" ");
//     }
//     for(int j=1;j<=nst;j++)//stars
//     {
//         printf("%d",j);
//     }
//     nst--;
//     nsp+=2;
//     printf("\n");
// }

int n;
printf("enter n: ");
scanf("%d",&n);

int min=0;
for(int i=1;i<=n;i++)
{
    for(int j=1;j<=n;j++)
    {
        int a=i;
        if(i>n){a=2*n-i;}
        int b=j;
        if(b>n){b=2*n-j;}
        if(a<b) min=a;
        else min=b;
        printf("%d",n+1-min);
    } 
printf("\n");
}
return 0;
}
