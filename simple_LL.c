#include <stdio.h>
#include <stdlib.h>

struct node {
   int data;
   struct node *next;
};

struct node *start = NULL;
struct node *current = NULL;


void display()
{

   struct node *ptr = start;

   printf("\n[start] -->");
   while(ptr != NULL) {        
      printf(" %d -->",ptr->data);
      ptr = ptr->next;
   }

   printf(" [null]\n");
}


void insert(int data) 
{
   struct node *current = (struct node*) malloc(sizeof(struct node));
   current->data = data;
   current->next = start;
   start = current;
}

int main()
{
	char ch;
	int n;
    while(ch!='n') 
	{
		printf("Enter the element to be inserted: ");
		scanf("%d",&n);
		getchar();
		insert(n);
		printf("Do you want to continue (y/n)? ");
		scanf("%c",&ch);		
	} 
   display();
   return 0;
}
