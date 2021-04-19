#include <stdio.h>
int sum(int);
int final_sum=0;
int main()
{
    int n,i;
	printf("Enter the number of numbers in the array");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
      {
        printf("Enter the %d element of the array \n",(i+1));
        scanf("%d",&a[i]);
        final_sum=sum(a[i]); 
      }
  printf("Sum of the numbers in the array is %d",final_sum);
}
int sum(int p)
{
  final_sum=final_sum+p;
  return final_sum;
}

