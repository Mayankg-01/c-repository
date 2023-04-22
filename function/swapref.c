#include<stdio.h>
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{ 
    int a=2;
    int b=9;
    swap(&a,&b);
    printf("the value of a=%d,b=%d",a,b);
    return 0; 
}