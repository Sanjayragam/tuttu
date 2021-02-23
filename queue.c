#include<stdio.h>
#include<stdlib.h>
int a[20],front=-1,rear=-1,x,n;
void enqueue()
{
if(rear==n-1)
printf("overflow\n");
else
{
scanf("%d",&x);
++rear;
if(front==-1)
front=0;
a[rear]=x;
}}
void dequeue()
{
if(front==-1)
printf("underflow\n");
else
{
printf("%d\n",a[front]);
++front;
if(front>rear)
front=rear=-1;
}}
void display()
{
if(front==-1)
printf("underflow\n");
else
{
for(int i=front;i<=rear;++i)
printf("%d ",a[i]);
printf("\n");
}}
int main()
{
int choice;
scanf("%d",&n);
while(1)
{
scanf("%d",&choice);
if(choice==1)
enqueue();
else if(choice==2)
dequeue();
else if(choice==3)
display();
else if(choice==4)
exit(0);
}}