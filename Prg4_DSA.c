#include <stdio.h>
int main()
{
  int i,a[5];
  for(i=0;i<5;i++)
    {
      printf("Enter the number at %d location: ",(i+1));
      scanf("%d",&a[i]);
    }
  printf("\nThe elements of the array are:\n\n");
  for(i=0;i<5;i++)
    {
      printf("%d ",a[i]);
    }
}
  
   
