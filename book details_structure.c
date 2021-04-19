#include<stdio.h>
#include<string.h>

struct bookdetail
{
	      int ISBN;
          char name[30];
          char author[30];
          int pages;
          int YoP;
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
        getchar();
 
        printf("\nEnter the Book Name:\n");
        fgets(b[i].name,20, stdin); 
        
 
        printf("Enter the Author of Book:\n");
        fgets(b[i].author,20, stdin); 
        

        printf("Enter the Pages of Book:\n");
        scanf("%d",&b[i].pages);
        
        printf("Enter the Year of publishing of Book:\n");
        scanf("%d",&b[i].YoP);               
 
        printf("Enter the Price of Book:\n");
        scanf("%f",&b[i].price);
        getchar();
        
        if(b[i].YoP<2004)
        b[i].price=50/100*b[i].price;
 
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
        
        printf("\t\tBook %d Year of Publication is=%f \n",i+1,b[i].YoP);
 
        printf("\n");
    }
    return 0;
}
