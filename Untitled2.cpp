#include<stdlib.h>
#include<stdio.h>
typedef struct node
{
    int data;
    struct node* link;
}NODE;
NODE *head=NULL;
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

static NODE *a[5],*s[2];
int i,j;
void sort(void)
{

    NODE *temp=head;
    while(temp!=NULL)
    {
        a[i]=temp;
        temp=temp->link;
        i++;
    }
    for(i=0;i<=5;i++)
    printf("%p\n",a[i]);
    /*printf("the values with address\n");
        for(i=0;i<=5;i++)
    printf("%d\n",a[i]->data);*/

    for(i=0;i<=5;i++)
    {
        for(j=i;j<=5;j++)
        {
            if(a[i]->data>a[j]->data)
            {
                s[0]=a[i];
                a[i]=a[j];
                a[j]=s[0];
            }
        }
    }

    printf("\n----------------\n");
        for(i=0;i<=5;i++)
    printf("%p\n",a[i]);
/*-----FOR linking the LINKS----*/
    head=a[0];
    NODE *next;
    next=head;
    for(i=1;i<=5;i++)
    {
        next->link=a[i];
        next=next->link;
    }
    next->link=NULL;
}

int main()
{
    insert(10);
    insert(2);
    insert(3);
    insert(1);
    insert(5);
    insert(0);
    display();
    printf("\n");
    sort();
    display();
    return 0;
}

