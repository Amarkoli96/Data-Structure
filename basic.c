#include<stdio.h>
int list[5];
int count=0,i;
void print(void)
{
    for(i=0;i<count;i++)
    {
        printf("%d \n",list[i]);
    }
}
void insert(int data)
{
    list[count]=data;
    count++;
}

int Isempty(void)
{
    if(0==count)
    {
	return 1;
    }
	else
	{
	    return 0;
	}

}
int Count(void)
{
    return count;
}

void modify(int a,int b)
{
    int temp=--a;
    list[a]=b;
}
void Remove(int index)
{
    index=index-1;
    int *p=NULL,*q=NULL;
    p=&list[index];
    q=&list[index+1];
    for(i=index;i<count;i++)
    {
        *p=*q;
        p++;
        q++;
    }
    count--;
}
int main()
{
    printf("Is empty %d",Isempty());
    insert(10);
    insert(20);
    insert(30);
    insert(40);
    insert(50);
    insert(60);
    insert(70);
    insert(80);
    insert(90);
    insert(100);

    //modify(2,1000);//for user index starts with 1
    printf("current value of list is %d\n",Count());
    print();
    printf("Is empty %d\n",Isempty());
   /* Remove(5);
    Remove(5);
    Remove(5);
    Remove(5);
    Remove(5);
    Remove(5);
    Remove(5);
    Remove(5);
    */

    print();


    return 0;
}

