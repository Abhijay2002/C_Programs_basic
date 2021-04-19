#include <stdio.h>
struct student
{
    char Name[50];
    int age;
    char gender;
    float CGPA;
    int dd;
    int mm;
    int yyyy;
    char lang[20];
    char city[30];
    
};

int main()
{
    int i,n;
    float percent;
	struct student s[20];
	printf("Enter number of students: ");
	scanf("%d",&n);
	getchar();
    for(i=0;i<n;i++)
    {
	    
	    printf("\nEnter details of student %d:\n",i+1);
	
        printf("Enter Student name: ");
        scanf("%[^\n]s", &s[i].Name);   
	    printf("Enter student age: ");
        scanf("%d", &s[i].age);    
        getchar();
        printf("Enter student gender(M/F): ");
        scanf("%c", &s[i].gender);    
        printf("Enter the day of birth dd: ");
        scanf("%d", &s[i].dd);
        printf("Enter the month of birth mm: ");
        scanf("%d", &s[i].mm);
        printf("Enter the year of birth yyyy: ");
        scanf("%d", &s[i].yyyy);
        printf("Enter the CGPA: ");
        scanf("%f", &s[i].CGPA);
        getchar();
        printf("Enter Students' mother tongue: ");
        scanf("%[^\n]s", &s[i].lang); 
        getchar();
        printf("Enter Students' city of residence: ");
        scanf("%[^\n]s", &s[i].city);
		getchar();         
        
    }
    printf("\nThe details of students required are:\n");
    for(i=0;i<n;i++)
    {
    	//if((s[i].gender=='M'||s[i].gender=='m')&&(s[i].age>18)&&(s[i].CGPA>8.5)&&(strcmpi(s[i].lang,"Tamil"))&&(strcmpi(s[i].city,"Vellore"))&&(s[i].dd==03)&&(s[i].mm==03))
    	if(s[i].Name[0]=='A'||s[i].Name[0]=='a'){
		
	    printf("\nThe details of student %d:\n",i+1);
	    printf("Student Name: %s\n",s[i].Name);
	    printf("Age: %d\n",s[i].age);
	    printf("Gender: %c\n",s[i].gender);
	    printf("Date of Birth: %d/%d/%d\n",s[i].dd,s[i].mm,s[i].yyyy);
	    printf("CGPA: %c\n",s[i].CGPA);
	    printf("Language: %s\n",s[i].lang);
	    printf("City of Residence: %s\n",s[i].city);}
	   
   }
	
    return 0;
}
