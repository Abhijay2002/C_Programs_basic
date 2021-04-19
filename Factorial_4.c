#include <stdio.h>
int factorial(int);
int main()
{
	int n,fact;
	printf("Enter the number");
	scanf("%d",&n);
	fact=factorial(n);
	printf("The factorial is %d",fact);
	
}
 int factorial(int n)
 {
 	int i=0,f=1;
 	for(i=1;i<=n;i++)
 	{
 		f=f*i;
	 }
	 return f;
 }
