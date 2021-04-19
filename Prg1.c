#include <stdio.h>

int main() 
{
	int num,n,i,counte=0,counto=0;
	printf("Enter the number of numbers");
    scanf(" %d",&num);
    int a[num];
    for (i=0; i<num; i++)
{   	
	
    printf("Enter the number");
    scanf("%d",&a[num]);
    if(a[num]%2==0)
    {
    	counte++;
	}
	else
	{
		counto++;
	}
	
   
}
printf("number of even numbers are: %d",counte);
printf("\n");
printf("number of odd numbers are: %d",counto);
 return 0;
}
  
