#include<stdio.h>
int fact(int);
int Fibonacci(int);
 
int main()
{
   int n, i = 0, c, f;
   printf("Enter the number of digits in the fibonacci series:");
   scanf("%d",&n);
 
   printf("\nFibonacci series\n");
 
   for (c= 1;c<= n;c++)
   {
      printf("%d ", Fibonacci(i));
      i++; 
   }
   printf("\n\nEnter the number whose factorial is to be calculated: ");
   scanf("%d",&n);
   f=fact(n);
   printf("Factorial of %d is: %d",n,f);
   return 0;
}
int fact(int n)
{
    if(n==0)
        return(1);
    return(n*fact(n-1));
}
 
int Fibonacci(int n)
{
   if ( n == 0 )
      return 0;
   else if ( n == 1 )
      return 1;
   else
      return ( Fibonacci(n-1) + Fibonacci(n-2) );
} 
