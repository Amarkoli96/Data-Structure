#include<stdio.h>
#include<stdlib.h>
struct st
{
	int data;
	struct st *next;
};
struct st *head=NULL;
void newnode(void)
{
	temp=(struct st *)malloc(sizeof(struct st));
	temp->data=data;
	temp->next=NULL;
}

void insert(int data)
{
	struct st *temp;
	if(head==NULL)
	{
	newnode();
	}
	else
	{
		struct st *temp,*temp1;
		temp=head;
		while(temp!=NULL)
		{
			temp=temp->next;
		}
	}
	
}

void printList(void)
{
	while(head!=NULL)
	{
		printf("%d",)
	}
}




int main()
{
	
	insert(10);
	insert(20);
	insert(30);	
	printList();
}
