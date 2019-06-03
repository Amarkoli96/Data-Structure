#include<stdio.h>
typedef struct node_block
{
    int data;
    node *add;
}node;

int Isempty(void)
{

    int value;
    if(NULL==Head)
    {
        value=1;
    }
    else
    {
        value=0;
    }
    return value;
}
int main()
{
    node *Head=NULL;
    printf("%d",Isempty());
    return 0;
}
