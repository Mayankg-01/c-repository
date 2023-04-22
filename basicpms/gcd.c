#include<stdio.h>
int gcd(int a, int b)
{
    int hcf;
  for (int i=1;i<=a && i<=b;i++) 
    {
        if(a%i == 0 && b%i == 0) 
        {
            hcf = i;
        } 
        
    }
    return hcf;
}
int main()
{
    int n1,n2;
    printf("enter n1 and n2 : ");
    scanf("%d %d",&n1,&n2);
    int hcf= gcd(n1,n2);
    printf("gcd is %d\n",hcf);
    return 0;
}


    
    
    