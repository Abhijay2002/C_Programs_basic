#include<stdio.h>
struct Employee
{
	int eID;
	char eName[10];
	float eSal;
	int eAge;
	char eDesg[10];
	char eGen;
};
int main()
{
	struct Employee e;
	printf("Enter the Details:");
	printf("Enter the Employee ID:\n");
	scanf("%d",&e.eID);
	printf("Enter the Employee Name:\n");
	scanf("%[^\n]s",&e.eName);
	printf("Enter the Employee Salary:\n");
	scanf("%f",&e.eSal);
	printf("Enter the Employee Designation:\n");
	scanf("%[^\n]s",&e.eDesg);
	printf("Enter the Employ Gender:\n");
	scanf("%c",&e.eGen);
	printf("The employee ID is: %d",e.eID);
	printf("The employee name is: %s",e.eName);
	if((e.eGen=='M'&&)(e.eSal>50000.0)(&&eAge>45))
	{
		strcpy(e.eDesg,"Senior Manager");
		
	}
	return 0;
}
