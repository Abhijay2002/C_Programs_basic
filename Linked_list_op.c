#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
}*start=NULL;

void ins_beg()
{
    struct node *new_node;
    new_node=(struct node*)malloc(sizeof(struct node));
    printf("Enter the element to be inserted: \n");
    scanf("%d",&new_node->data);
    if(start==NULL)
    {
        new_node->next=NULL;
        start=new_node;
    }
    else
    {
    new_node->next=start;
    start=new_node;
    }
}

void ins_end()
{
  struct node *new_node;
  struct node *temp;
  new_node=(struct node*)malloc(sizeof(struct node));
  printf("Enter the element to be inserted: \n");
  scanf("%d",&new_node->data);
  new_node->next=NULL;
  if(start==NULL)
  {
      start=new_node;
  }
  else
  {
      temp=start;
      while(temp->next!=NULL)
      {
          temp=temp->next;
      }
    temp->next=new_node;
  }
}
void insert_rand()
{   int pos;
    struct node *new_node;
    new_node=(struct node*)malloc(sizeof(struct node));
    printf("Enter the position you want to enter element into: \n");
    scanf("%d",&pos);
    printf("Enter the element to be inserted: \n");
    scanf("%d",&new_node->data);
    if(start==NULL)
    {
        new_node->next=NULL;
    }
    else if(pos==0)
    {
        new_node->next=start;
    }
    else
    {
    struct node *temp;
    temp=start;
    while(pos-1>0)
    {
        temp=temp->next;
        pos--;
    }
    new_node->next=temp->next;
    temp->next=new_node;
    }
}
void del_beg()
{   struct node *temp;
    if(start==NULL)
    {
        printf("No element available to delete \n");
    }
    else
    {
    temp=start;
    start=start->next;
    free(temp);
    }
}
void del_end()
{
    struct node *temp,*del;
    temp=start;
    while(temp->next->next!=NULL)
    {
        temp=temp->next;
    }
    
    del=temp->next->next;
    temp->next=NULL;
    free(del);
}
void delete_rand()
{
    struct node *temp,*prev;
    int pos;
    temp=start;
    printf("enter the position : \n");
    scanf("%d",&pos);
    while(pos-1>=0)
    {   prev=temp;
        temp=temp->next;
        pos--;
    }
    prev->next=temp->next;
    temp->next=NULL;
    free(temp);

}
void display()
{
    struct node *new_node;
    new_node=start;
    printf("\n The linked list is: \n ");
    while(new_node!=NULL)
    {
        printf("%d -> ",new_node->data);
        new_node=new_node->next;
    }
    printf(" NULL ");
}

int main()
{
    int ch;
    printf("MAIN MENU");
    printf("\n1) To insert the node at the begining");
    printf("\n2) To insert the node at the end");
    printf("\n3) To insert the node at the middle");
    printf("\n4) To delete the node at the begining");
    printf("\n5) To delete the node at the end");
    printf("\n6) To delete the node at the middle");
    printf("\n7) To display the node at the middle");
    printf("\n8) Exit\n");
    
    while(1)
    {   printf("Enter your choice: ");
        scanf("%d",&ch);
    switch(ch)
    {
        case 1: ins_beg();
                break;
        case 2: ins_end();
                break;
        case 3: insert_rand();
                break;
        case 4: del_beg();
                break;
        case 5: del_end();
                break;
        case 6: delete_rand();
                break;
        case 7: display();
                break;
        case 8: exit(0);

      default: printf("Please enter the right choice.");
    }
    }
    return 0;
}
