#include <stdio.h>
int main()
{
  int n,i,min,max;
  printf("Enter the number of elements in the array ");
  scanf("%d",&n);
  int a[n];
  printf("Enter the %d element: ",1);
  scanf("%d",&a[0]);
  min=a[0];
  max=a[0];
  for(i=1;i<n;i++)
    {
      printf("Enter the %d element: ",i+1);
      scanf("%d",&a[i]);
      if(a[i]<min)
        min=a[i];
      else if(a[i]>max)
        max=a[i];
      else
        continue;
    }
  printf("The maximum element in the array is %d\n",max);
  printf("The minimum element in the array is %d\n",min);
  return 0;
}
  
   
