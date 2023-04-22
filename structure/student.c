#include<stdio.h>
#include<string.h>
int main()
{
   typedef struct student
    {
       int roll;
       char name[50];
       char branch[50];
       float cgpa; 
    }stu;
    stu s1;
strcpy(s1.name,"Jyoti");
printf("%s",s1.name);


return 0;
}