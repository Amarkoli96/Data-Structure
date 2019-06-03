#include<stdio.h>
#include<stdlib.h>

 struct node
{
    int data;
    node *ptr;
};

node *head=NULL;

/*void insert(int data)
{
    node *temp;
    temp=(node*)malloc(sizeof(node));
    head=temp;
    temp->data=data;
    temp->ptr=NULL;
}
int main()
{

    insert(1);
    insert(2);
}
