#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
typedef struct node n;
n *head;
int main()
{
    int n;
    printf("enter the size:");
    scanf("%d",&n);
    printf("enter the list:\n");
    while(n!=0)
    {
        create();
        n--;
    }
    display();
}
create()
{
    int b;
    scanf("%d",&b);
    n *newnode,*temp;
    newnode=(n*)malloc(sizeof(n));
    newnode->data=b;
    newnode->next=head;
    head=newnode;
    
}
display()
{
    while(head!=NULL)
    {
        printf("%d->",head->data);
        head=head->next;
    }
}
