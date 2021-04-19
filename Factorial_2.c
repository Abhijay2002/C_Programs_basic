#include <stdio.h>
void factorial(int);
int main()
{
	int n;
	printf("Enter the number: ");
	scanf("%d",&n);
	factorial(n);
	
	
}
 void factorial(int n)
 {
 	int i=0,f=1;
 	for(i=1;i<=n;i++)
 	{
 		f=f*i;
	}
	 printf("The factorial is %d",f);	 
 }
