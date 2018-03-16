#include<stdio.h>
#include<stdlib.h>
void enqueue(int n);
void display();
void dequeue();
int front =-1,rear=-1,a[100],n,data,count=0;
int main()
{
int ch,n;
printf("\n enter the size of the array");
scanf("%d",&n);

while(1)
{
printf("\n1.enqueue\n2.dequeue\n3.display\n4.exit");
scanf("%d",&ch);
switch(ch)
{
case 1:enqueue(n);break;
case 2:dequeue();break;
case 3:display();break;
case 4:exit(0);
}
}
}
void enqueue(int n)
{
printf("\n enter the data to enqueue");
scanf("%d",&data);
if(count<n)
{
if(front==-1&&rear==-1)
{
front++;rear++;
a[front]=a[rear]=data;
}
else
{
rear++;
a[rear]=data;
}
count++;
}
else
{
printf("\nOverflow");
}
}


void display()
{
int i;
for(i=front;i<=rear;i++)
{
printf("%d ",a[i]);
}
}

void dequeue()
{
if(front<=rear)
{
front++;
}
else
{
printf("\nUnderflow");
}
}


