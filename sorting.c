#include<stdio.h>
#include<stdlib.h>

typedef struct st
{
	int data;
	struct st *link;
}NODE;

NODE *HEAD=NULL;
void insert(void)
{
	if(HEAD==NULL)
	{
		NODE*temp;
		temp=(NODE*)malloc(sizeof(NODE));
		head=temp;
		head->
	}
}
int main()
{
	insert(10);
	insert(20);
	insert(30);
	insert(40);
	insert(50);
	display();
	return 0;
}
