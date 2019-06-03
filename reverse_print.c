#include<stdio.h>
#include<stdlib.h>

typedef struct st
{
	int data;
	struct st *link;
}NODE;

NODE *HEAD=NULL;

void add(int data)
{
	if(HEAD==NULL)
	{
		HEAD=(NODE*)malloc(sizeof(NODE));
		HEAD->data=data;
		HEAD->link=NULL;
	}
	else
	{
		NODE *trav,*temp;
		trav=HEAD;
		while(trav->link!=NULL)
		{
			trav=trav->link;
		}
		temp=(NODE*)malloc(sizeof(NODE));
		trav->data=data;
		trav->link=NULL;
		trav=temp;
	}
}

int main()
{
	add(10);
	add(20);
	add(30);
	add(50);
	display();
	printf("\n");
	//reverse_display();
	return 0;
}
