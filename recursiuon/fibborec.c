#include<stdio.h>
int fibbo(int a)
{
    if(a<=2) return 1;
    return fibbo(a-1)+fibbo(a-2);
}

int main()
{
    int n;
    printf("Enter n: ");
    printf("%d",fibbo(n));
return 0;
} 