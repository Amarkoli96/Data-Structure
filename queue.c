#include<stdio.h>
#include<stdlib.h>

int a[4];
int rear=-1,front=-1;

void Enqueue(int data)
{
	if(Isfull())
	{
		printf("Queue is  full\n");
	}
	else if(Isempty())
	{
		rear=0;
		front=0;
		a[rear]=data;
	}
	else
	{
		rear++;
		rear=rear%5;
		a[rear]=data;
	}
}

int main()
{
	Enqueue(1);
	Enqueue(5);
	Enqueue(4);
	Enqueue(3);
	Enqueue(2);
	Dequeue();
	Dequeue();
	Enqueue(7);
	Enqueue(8);
	Enqueue(9);
	Display();
 } 
