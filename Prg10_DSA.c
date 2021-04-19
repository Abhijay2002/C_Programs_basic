#include <stdio.h>
#include <stdlib.h>

int main()
{
	
	int i;
	int count;
	int *arr,*arr_new;
	int sum = 0;

	
	printf("Enter the total number of elements you want to enter : ");
	scanf("%d",&count);
    getchar();
	
	arr = (int *)malloc(count * sizeof(int));

	
	for(i = 0;i<count;i++)
	{
		
		printf("Enter element %d : ",(i+1));
		scanf("%d",&arr[i]);
        sum += arr[i];
	}

	getchar();
	printf("sum of %d numbers is %d \n",count,sum);
	arr_new=(int*)realloc(arr,sizeof(int)*(count+2));
    printf("\nEnter the element %d :",count+1);
    scanf("%d",&arr_new[count]);
    sum+=arr[count];
    printf("Enter the element %d :",count+2);
    scanf("%d",&arr_new[count+1]);
    sum+=arr[count+1];
    printf("The sum of %d numbers is: %d",count+2,sum);
    free(arr);
    free(arr_new);
	return 0;
}

