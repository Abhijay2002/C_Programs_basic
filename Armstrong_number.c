#include<stdio.h>  
 int main()    
{    
int num,n,rem,i,sum=0,temp;
printf("Enter the number of numbers");
scanf("%d",&num);
for(i=0;i<num;i++)   
{
	sum=0;
	printf("enter the number=");    
scanf("%d",&n);    
temp=n;    
while(n>0)    
{    
rem=n%10;    
sum=sum+(rem*rem*rem);    
n=n/10;    
}    
if(temp==sum)    
printf("It is an armstrong  number \n");    
else    
printf("It is not an armstrong number \n");    

}
return 0;    
}

