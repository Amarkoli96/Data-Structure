#include<stdio.h>
#include<stdlib.h>

typedef struct st
{
	struct st *left;
	char  data;
	struct st *right;
}NODE;

NODE *root=NULL;

NODE*newnode(int data)
{
	NODE*temp=(NODE*)malloc(sizeof(NODE));
	temp->data=data;
	temp->left=NULL;
	temp->right=NULL;
	return temp;
}

NODE * insert(NODE *root,char data)
{
	if(root==NULL)
	{
		root=newnode(data);
	}
	else if(data<=root->data)
	{
		root->left=insert(root->left,data);
	}
	else
	{
		root->right=insert(root->right,data);	
	}
	return root;	
}

void display(NODE*root)
{
	if(root!=NULL)
	{
		display(root->left);
		printf("%c ",root->data);
		display(root->right);
	}
}

void IN_ORDER(NODE*root)
{
	if(root!=NULL)
	{
		display(root->left);
		printf("%c ",root->data);
		display(root->right);
	}
}

void PRE_ORDER(NODE*root)
{
	if(root!=NULL)
	{
		printf("%c ",root->data);
		display(root->left);
		display(root->right);
	}
}

void POST_ORDER(NODE*root)
{
	if(root!=NULL)
	{
		display(root->left);
		display(root->right);
		printf("%c ",root->data);
	}
}

void find_min(NODE*root)
{
	 	NODE *temp;
	 	while(root!=NULL)
	 	{
	 		temp=root;
	 		root=root->left;
		}
		printf("\nminimum is %c",temp->data);
}

void find_max(NODE*root)
{
	 	NODE *temp;
	 	while(root!=NULL)
	 	{
	 		temp=root;
	 		root=root->right;
		}
		printf("\nmaximum is %c",temp->data);
}
static int level=0;
static int height=0;
int  find_height(NODE*root,int level)
{
	
	if(root!=NULL)
	{
		find_height(root->left,level+1);
		
		find_height(root->right,level+1);	
	}
	if(height<=level)
	{
		height=level;
	}
	return height-1;	
}
		
int main()
{
	
	root=insert(root,'f');//Intitilization of the root node is compulsary at the begining
	
	insert(root,'d');
	insert(root,'j');
	insert(root,'b');
	insert(root,'e');
	insert(root,'g');
	insert(root,'k');
	insert(root,'a');
	insert(root,'c');
	insert(root,'i');
	insert(root,'h');
	
	display(root);
	printf("\n");
	printf("\n");
	IN_ORDER(root);
	printf("\n");
	printf("\n");
	PRE_ORDER(root);
	printf("\n");
	printf("\n");
	POST_ORDER(root);
	printf("\n");
	printf("\n");
		
	find_min(root);
	find_max(root);
	printf("\n");
	int height=find_height(root,level);
	printf("height is %d",height);

	
	return 0;
}
