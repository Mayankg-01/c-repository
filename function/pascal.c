#include<stdio.h>
//factorial method
// int factorial(int x)
// {
//     int fact=1;
//     for(int i=1;i<=x;i++)
//     {
//     fact=fact*i;
//     }
//     return fact;
// }

// int combination(int n,int r){
//      int ncr=factorial(n)/(factorial(r)*factorial(n-r));
//      return ncr;
// }
// int main()
// {
//     int n;
//     printf("Enter n: ");
//     scanf("%d",&n);

//     for(int i=0;i<=n;i++)
//     {
//         for(int s=0;s<=n-i;s++)
//         {
//             printf(" ");
//         }
//         for(int j=0;j<=i;j++)
//         {
//             int icj= combination(i,j);
//             printf("%d ",icj);
//         }
//         printf("\n");
//     }


int main()
{
    // int n;
    // printf("Enter n: ");
    // scanf("%d",&n);
    // int first = 1;
    // for(int i=0;i<n;i++)
    // {
    //     for(int s=0;s<=n-i;s++)
    //     {
    //         printf(" ");
    //     }
        
    //     for(int j=0;j<=i;j++)
    //     {
    //         if(j==0 || i==0) {
    //             first = 1;
    //         }
    //         else {
    //             first=first*(i-j+1)/(j);
    //         }
    //         printf("%d ",first);
    //     }
    //     printf("\n");  
    // }


    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    
    for(int i=0;i<n;i++)
    {
        for(int s=0;s<=n-i;s++)
        {
            printf(" ");
        }
        int first = 1;
        for(int j=0;j<=i;j++)
        {
            printf("%d ",first);
            first=first*(i-j)/(j+1);
        }
        printf("\n");  
    }
    return 0;
}
