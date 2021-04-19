#include <stdio.h>
struct person
{
    char Name[50];
    int age;
    char gender;
    float dld;
    float dsa;
    float oops;
    float chem;
    float stats;
    char grade;
    
};

int main()
{
    int i,n;
    float percent;
	struct person *s_ptr, s[20];
	printf("Enter number of students: ");
	scanf("%d",&n);
	getchar();
    for(i=0;i<n;i++)
    {
    	
    	percent=0;
	    s_ptr = &s[i];
	    printf("\nEnter details of student %d:\n",i+1);
	
        printf("Enter Student name: ");
        scanf("%[^\n]s", &s_ptr->Name);   
	    printf("Enter student age: ");
        scanf("%d", &s_ptr->age);    
        getchar();
        printf("Enter student gender: ");
        scanf("%c", &s_ptr->gender);    
        printf("Enter marks in DLD: ");
        scanf("%f", &s_ptr->dld);
        printf("Enter marks in DSA: ");
        scanf("%f", &s_ptr->dsa);
        printf("Enter marks in Statistics: ");
        scanf("%f", &s_ptr->stats);
        printf("Enter marks in Chemistry: ");
        scanf("%f", &s_ptr->chem);
        printf("Enter marks in Object Oriented programming: ");
        scanf("%f", &s_ptr->oops);
        getchar();
    
        percent =(s_ptr->dld+s_ptr->dsa+s_ptr->stats+s_ptr->chem+s_ptr->oops)/500*100;
        if(percent>=90.0)
        s_ptr->grade='A';
        else if(percent>=80.0 && percent<90.0)
        s_ptr->grade='B';
        else if(percent>=70.0 && percent<80.0)
        s_ptr->grade='C';
        else if(percent>=60.0 && percent<70.0)
	    s_ptr->grade='D';
        else 
        s_ptr->grade='F'; 

    }
    for(i=0;i<n;i++)
    {
    	s_ptr = &s[i];
	    printf("\nThe details of student %d:\n",i+1);
	    printf("Student Name: %s\n",s_ptr->Name);
	    printf("Age: %d\n",s_ptr->age);
	    printf("Gender: %c\n",s_ptr->gender);
	    printf("GRADE: %c\n",s_ptr->grade);
   }
	
    return 0;
}
