#include<stdio.h>    
#include<stdlib.h>  
int main(){  
int bin[10],n,i;   
printf("decimal:");    
scanf("%d",&n);    
for(i=0;n>0;i++)    
{    
bin[i]=n%2;    
n=n/2;    
}    
printf("Binary:");    
for(i=i-1;i>=0;i--)    
{    
printf("%d",bin[i]);    
}    
return 0;  
}  
