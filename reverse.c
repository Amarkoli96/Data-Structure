#include<stdio.h>
#include<stdlib.h>
typedef struct st
{
	int data;
	struct st *link;
}NODE;
NODE *HEAD=NULL;
void insert(int data)
{
		if(NULL==HEAD)
	{
		HEAD=(NODE*)malloc(sizeof(NODE));
		HEAD->data=data;
		HEAD->link=NULL;
	
	}
	else
	{
	
		NODE*temp=(NODE*)malloc(sizeof(NODE));
		temp->data=data;
		temp->link=NULL;
		HEAD->link=temp;
		
	}
}
void Display(void)//Display's all the contents of stack
{
	NODE* temp;
	temp=HEAD;
	if(NULL==HEAD)
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
int main()
{
	insert(10);
	insert(20);
	insert(30);
	insert(40);
	Display();
	return 0;
}
