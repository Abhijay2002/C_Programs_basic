#include<stdio.h>    
#include<math.h>  
int main(){  
int a,n,m=0,i=0;   
printf("Enter the number to convert: ");    
scanf("%d",&n);    
while(n>0)    
{ 
   
a=n%10;    
n=n/10;
m+=a*pow(2,i);
i++;   
}    
printf("%d",m);
return 0;  
}  
