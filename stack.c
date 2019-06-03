#include<stdio.h>
#include<stdlib.h>
#define EXIT (4)

typedef struct st //defining the node
{
	int data;
	struct st *link;
}NODE;

NODE *TOP=NULL; //Initilizing the TOP pointer to NULL

void PUSH(int data)//Push's the data to stack
{
	if(NULL==TOP)
	{
		TOP=(NODE*)malloc(sizeof(NODE));
		TOP->data=data;
		TOP->link=NULL;
	
	}
	else
	{
	
		NODE*temp=(NODE*)malloc(sizeof(NODE));
		temp->data=data;
		temp->link=TOP;
		TOP=temp;
		
	}
}
void POP()//Pops the data from the stack 
{
	if(NULL==TOP)
	{
		printf("Stack is empty\n");
	}
	else
	{
		TOP=TOP->link;
	}
}

void Display(void)//Display's all the contents of stack
{
	NODE* temp;
	temp=TOP;
	if(NULL==TOP)
	{
		printf("Stack is empty\n");
	}
	else
	{
	while(temp->link!=NULL)
	{
		printf(" | %d |\n ",temp->data);
		printf("-----\n");
		temp=temp->link;
		
	}
	printf(" | %d |\n ",temp->data);
	printf("///////////////////////\n");
	}

}
int main()//Main where the execution Begin's
{
	int choice,value;
	while(choice!=EXIT)
	{
		printf("Enter the choice \n");
		printf("1.push 2.pop 3.display 4.exit\n");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:	printf("Enter the data ");
					scanf("%d",&value);
					PUSH(value);
					printf("\n");
					break;
			case 2:POP();
			printf("\n");
					break;
			case 3:Display();
			printf("\n");
					break;
			case 4:
			break;
					
		}
	}
	return 0;
}
