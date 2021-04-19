#include <stdio.h>
int main()
{
  int n,i;
  printf("Enter the number of elements in the array ");
  scanf("%d",&n);
  int a[n];
  for(i=0;i<n;i++)
    {
      printf("Enter the %d element: ",i+1);
      scanf("%d",&a[i]);
    }
  printf("\nThe array in the forward direction is:\n");
  for(i=0;i<n;i++)
    {
      printf("%d ",a[i]);
    }
   printf("\nThe array in the reverse direction is:\n");
  for(i=n-1;i>=0;i--)
    {
      printf("%d ",a[i]);
    }
  return 0;
}
  
