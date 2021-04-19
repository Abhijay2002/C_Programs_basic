/*Minimum Value Expression
Given three integers a,b,c = 0, write a C++ program to find the minimum value that may be obtained by expression with only binary operators +, - and *. Use all the three integers for finding minimum value. For example when a= 2, b =1 c = 3 minimum value is -5

Input Format

First line contains the value of a

Next line contains the value of b

Next line contains the value of c

Output Format

Print the minimum value that can be obtained*/
#include <stdio.h>
int main()
{
int x[3],i;
    scanf("%d",&x[0]);
    scanf("%d",&x[1]);
    scanf("%d",&x[2]);
int arr[21],k=0;

  for(i=0;i<3;i++)
    {
    arr[k]=x[i%3]+x[(i+1)%3]-x[(i+2)%3];
    k++;
    arr[k]=x[i%3]+x[(i+1)%3]*x[(i+2)%3];
    k++;
    arr[k]=x[i%3]*x[(i+1)%3]-x[(i+2)%3];
    k++;
    arr[k]=x[i%3]*x[(i+1)%3]+x[(i+2)%3];
    k++;
    arr[k]=x[i%3]-x[(i+1)%3]-x[(i+2)%3];
    k++;
    arr[k]=x[i%3]-x[(i+1)%3]+x[(i+2)%3];
    k++;
    arr[k]=x[i%3]-x[(i+1)%3]*x[(i+2)%3];
    k++;
   }
int min=arr[0];
for(i=0;i<21;i++)
{
	if(arr[i]<min)
	min=arr[i];
}
printf("%d",min);
}

