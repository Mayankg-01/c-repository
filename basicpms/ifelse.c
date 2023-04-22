#include<stdio.h>
int main()
{
    int i;
    printf("Enter the number: ");
    scanf("%d",&i);
    if(i>5){
        printf("the no is greater than five");
    }
    else if(i<5){
        printf("the no is less than five");
    }
    else{
        printf("it is 5");
    }
    return 0;
}
