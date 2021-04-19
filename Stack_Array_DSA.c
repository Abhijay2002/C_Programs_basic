#include <stdio.h>
#include <stdlib.h>
#define SIZE 15

int isEmpty();
int isFull();
void push(int);
void pop();
void display();

int stack[SIZE], top=-1;

void main() 
{
    int ch,x;
    while(1)
	{
        printf("\nMENU\n");
        printf("1. Push\n2. Pop\n3. Display\n4. Exit\n");
        printf("Enter your choice:\n");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                printf("Enter the value to be inserted: ");
                scanf("%d",&x);
                push(x);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
            default:
                printf("\nWrong Selection!!! Try Again!!!");
        }         
    }
}

int isEmpty()
{
    if(top==-1)
        return 1;
    else
        return 0;
}

int isFull()
{
    if(top==SIZE-1)
        return 1;
    else
        return 0;
} 

void push(int x)
{
    if(isFull())
        printf("\nStack is full!!! Insertion not possible!");
    else
	{
        top++;
        stack[top]=x;
        printf("\nInsertion Successful!");
    }
}

void pop()
{
    if(isEmpty())
        printf("\nStack is empty! Deletion not possible!");
    else
	{
		printf("\nElement deleted is: %d",stack[top]);
        top--;
        printf("\nDeletion Successful!");
    }
}

void display()
{
	int i;
    if(isEmpty())
        printf("\nThe Stack is Empty!!!");
    else
	{
        printf("\nThe stack elements are:\n");
        for(i=top;i>=0;i--)
		{
        printf("%d\n",stack[i]);
        }
    }
}


