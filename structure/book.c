#include<stdio.h>
#include<string.h>
int main()
{
    struct book
    {
       char name[50];
       int noOfpages;
       float price; 
    } b1,b2,b3;

    strcpy(b1.name,"Bhagwat Geeta");
    b1.noOfpages= 745;
    b1.price= 200.67;

    printf("%s\n",b1.name);
    printf("%d\n",b1.noOfpages);
    printf("%f\n",b1.price);




return 0;
}