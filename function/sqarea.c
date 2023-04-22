#include<stdio.h>
int square();
void main()
{
    printf("Going to cal area of squar\n");
    float area = square();
    printf("The area is:%f",area);
}

int square()
{
    float side;
    printf("Enter the side in m: ");
    scanf("%f",&side);
    return side*side;
}