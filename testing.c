#include <stdio.h>
struct employee
{
	int eID;
	char ename[10];
};
int main()
{
	struct Employee e[2];
	e[0].eID=1;
	strcpy(e[0].name,"Ram");
	e[1].eID=2;
	strcpy(e[1].name,"sita");
	struct employee *ptr;
	ptr=e
	printf("%d",e[0].eID)
	
	/*int arr[8]={92,85,75,88,79,54,34,55};
	int *ptr=arr;
	printf("%d\n",&arr[0]);
	printf("%d\n",ptr);
	printf("%d\n",arr);
	printf("size in 64 bit %d\n",sizeof(arr[0]));
	printf("%d\n",ptr+1);
	printf("%d\n",&(ptr));
	printf("%d\n",*(ptr+1));*/
	return 0;	
}
