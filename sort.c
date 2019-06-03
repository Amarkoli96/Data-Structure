#include<stdlib.h>
#include<stdio.h>
typedef struct node
{
	int data;
	struct node* link;
}NODE;

NODE *head=NULL;

void Insert(int);
void Display(void);
int main()
{
	Insert(10);
	Insert(30);
	Insert(20);
	Insert(5);
	Display();
}
void Insert(int data)
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
		
		temp->link=temp1;//Linking of the new node
	}
}
void Display(void)
{
	NODE* temp;
	temp=head;
	while(temp!=NULL)
	{
		printf("%d-> ",temp->data);
		temp=temp->link;
	}
}
