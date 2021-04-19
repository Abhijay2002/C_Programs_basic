#include<stdio.h>
#include<string.h>

struct bookdetail
{
	      int ISBN;
          char name[30];
          char author[30];
          int pages;
          float price;
 
};

int main()
{
	
    struct bookdetail b[50];
 
    int num,i;
    printf("Enter the Numbers of Books:");
    scanf("%d",&num);
    getchar();
    printf("\n");
    for(i=0;i<num;i++)
    {
    	printf("Book %d Detail:\n",i+1);
    	
    	printf("Enter the ISBN of Book:\n");
        scanf("%d",&b[i].ISBN);
 
        printf("\nEnter the Book Name:\n");
        fgets(b[i].name,20, stdin); 
        
 
        printf("Enter the Author of Book:\n");
        fgets(b[i].author,20, stdin); 
        

        printf("Enter the Pages of Book:\n");
        scanf("%d",&b[i].pages);
        
 
        printf("Enter the Price of Book:\n");
        scanf("%f",&b[i].price);
        getchar();
 
    } 
    for(i=0;i<num;i++)
    {
    	printf("\n");
 
        printf("Book No.%d\n",i+1);
        
        printf("\t\tBook %d ISBN is=%d \n",i+1,b[i].ISBN);
 
        printf("\t\tBook %d Name is=%s \n",i+1,b[i].name);
 
        printf("\t\tBook %d Author is=%s \n",i+1,b[i].author);
 
        printf("\t\tBook %d Pages is=%d \n",i+1,b[i].pages);
 
        printf("\t\tBook %d Price is=%f \n",i+1,b[i].price);
 
        printf("\n");
    }
    return 0;
}
