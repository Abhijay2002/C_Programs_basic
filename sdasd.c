#include <stdio.h> 
int main()
{
int a=3;
int b=5;
b=a;
int *ptr1;
int *ptr2;
ptr1=&b;
printf("%d",&ptr1);
printf("%d",&ptr2);
}
