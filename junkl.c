#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
struct node
{
	int data;
	struct node *link;
};
struct node* Merge(struct node *head1, struct node *head2)
{
	struct node *temp;
	if(head1 == NULL)
	{
		
    	return head2;
	}
	if(head2 == NULL)
	{
    	
    	return head1;
    }
	
	temp = head1;
	while(temp->link != NULL)
	{
		temp = temp->link;
	}	
	temp->link = head2;
	return head1;
}

void sort(struct node **head)
{
	int flag;
	struct node *p1;
	struct node *p2 = NULL;
	if(*head == NULL)
    return;
	do
    {
    	flag = 0;
    	p1 = *head;
    	while(p1->link != p2)
        {
        	if(p1->data>p1->link->data)
        	{
            	int temp = p1->data;
            	p1->data = p1->link->data;
            	p1->link->data = temp;
            	flag = 1;
        	}
        }
    	p2 = p1;
    }while(flag);
}

struct node* add_at_end(struct node *ptr, int data)
{
	struct node *temp = (struct node *) malloc(sizeof(struct node)), *ptr1;
	temp->data = data;
	temp->link = NULL;
	if(ptr==NULL)
    {
      ptr=temp;
    }
    else
    {
      ptr1=ptr;
      while(ptr1->link!=NULL)
      {
          ptr1=ptr1->link;
      }
      ptr1->link=temp;
    }
	return ptr;
}

void display(struct node* head)
{
    if(head == NULL)
    {
        printf("Linked List is empty\n");
    }
    struct node *ptr;
    ptr = head;
    while(ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }
    printf("\n");

}

int main()
{
	int i, n1, n2, el1, el2;
	printf("Enter number of odd elements in list: ");
	scanf("%d", &n1);
	struct node *head1, *ptr1;
	printf("Enter odd element 1: ");
	scanf("%d", &el1);
	head1->data = el1;
	head1->link = NULL;
	for(i = 1; i < n1; i++)
	{
		int element;
		printf("Enter odd element %d", i + 1);
		scanf("%d", &element);
		head1 = add_at_end(head1, element);
	}
	display(head1);
	printf("Enter number of even elements in list: ");
	scanf("%d", &n2);
	struct node *head2, *ptr2;
	
	for(i = 0; i < n2; i++)
	{
		int element1;
		printf("Enter even element  %d", i + 1);
		scanf("%d", &element1);
		head2 = add_at_end(head2, element1);
	}
	display(head2);
	head1 = Merge(head1, head2);
	sort(&head1);
	display(head1);
	return 0;
}
