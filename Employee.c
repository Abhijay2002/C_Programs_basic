#include <stdio.h>
#include <stdlib.h>
struct employee
{
    char Name[50];
    int age;
    char gender;
    int ID;
    float sal;
    
};

int main()
{
    int i,n;
    float percent;
	struct employee *e;

	printf("Enter number of employees: ");
	scanf("%d",&n);
	getchar();
		e=(struct employee *)malloc(n*(sizeof(struct employee)));
	
    for(i=0;i<n;i++)
    {
    	
    	percent=0;
	    
	    printf("\nEnter details of the employee %d:\n",i+1);
	
        printf("Enter Employee name: ");
        scanf("%[^\n]s", &e->Name);   
	    printf("Enter Employee age: ");
        scanf("%d", &e->age);    
        getchar();
        printf("Enter Employee gender: ");
        scanf("%c", &e->gender);    
        printf("Enter Employee salary: ");
        scanf("%f", &e->sal);
        printf("Enter Employee ID: ");
        scanf("%d", &e->ID);
        getchar();
    
     

    }
    for(i=0;i<n;i++)
    {
    	
	    printf("\nThe details of Employee %d:\n",i+1);
	    printf("Employee Name: %s\n",e->Name);
	    printf("ID: %d\n",e->ID);
	    printf("Age: %d\n",e->age);
	    printf("Gender: %c\n",e->gender);
	    printf("Salary: %f",e->sal);
	    
   }
	
    return 0;
}
