#include<stdlib.h>
#include<stdio.h>
typedef struct node
{
	int data;
	struct node* link;
}NODE;
NODE *head=NULL;
void inset(int);
void display(void);

void recur(NODE*temp)
{
	if(temp->link!=NULL)
	{
		recur(temp->link);
	}
	printf("%d->",temp->data);
}

int main()
{
	insert(10);
	insert(20);
	insert(30);
	display();
	printf("\n");
	recur(head);
}
void insert(int data)
{
	if(head==NULL)
	{
		head=(NODE*)malloc(sizeof(NODE));
		head->data=data;
		head->link=NULL;
	}
	else
	{
		NODE *temp,*temp1;
		temp=head;
		while(temp->link!=NULL)
		{
			temp=temp->link;
		}
		temp1=(NODE*)malloc(sizeof(NODE));
		temp1->data=data;
		temp1->link=NULL;
		
		temp->link=temp1;
	}
}
void display(void)
{
	NODE* temp;
	temp=head;
	while(temp!=NULL)
	{
		printf("%d-> ",temp->data);
		temp=temp->link;
	}
}
