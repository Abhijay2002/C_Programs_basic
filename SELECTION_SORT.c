#include <stdio.h>
int main()
{
int n, i, j, pos, swap;
printf("Enter number of elements:\n");
scanf("%d", &n);
int a[n];
printf("Enter %d Numbers of the array:\n", n);
for (i = 0; i < n; i++)
scanf("%d", &a[i]);
for(i = 0; i < n - 1; i++)
{
pos=i;
for(j = i + 1; j < n; j++)
{
if(a[pos] > a[j])
pos=j;
}
if(pos != i)
{
swap=a[i];
a[i]=a[pos];
a[pos]=swap;
}
}
printf("Sorted Array:\n");
for(i = 0; i < n; i++)
printf("%d ", a[i]);
return 0;
}
