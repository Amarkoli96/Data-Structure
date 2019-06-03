#include<stdio.h>
#include<stdlib.h>
typedef struct st
{
	int data;
	struct st *link;
}NODE;
NODE *head=NULL;
void Insertfirst(int data)
{
	NODE *temp,*trav;
	trav=head;
	temp=(NODE*)malloc(sizeof(NODE));
	temp->data=data;
	head=temp;
	head->link=trav;
}


void Insertlast(int data)
{
	if(head==NULL)
	{
		head=(NODE*)malloc(sizeof(NODE));
		head->data=data;
		head->link=NULL;
	}
	else
	{
		NODE *tra,*temp;
		tra=head;
		while(tra->link!=NULL)
		{
			tra=tra->link;
		}
		temp=(NODE*)malloc(sizeof(NODE));
		temp->data=data;
		temp->link=NULL;
		tra->link=temp;
	}
}


void display(void)
{
	NODE* temp;
	temp=head;
	while(temp!=NULL)
	{
		printf("%d->\n ",temp->data);
		temp=temp->link;
		
	}

}

void Insertpos(int pos,int data)
{
	NODE *prev;
	prev=head;
	int count=0;
	while(count<=pos)
	{
		prev=prev->link;
		count++;
	}
	NODE *temp=(NODE*)malloc(sizeof(NODE));
	
	
	temp->data=data;
	temp->link=prev->link;
	prev->link=temp;
	
}



int main()
{
	Insertfirst(10);
	Insertfirst(20);
	Insertfirst(30);
	Insertfirst(40);
	Insertfirst(50);
	display();

	return 0;
}
