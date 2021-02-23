#include<stdio.h>
#include<stdlib.h>
#define MAX 20
int stack[MAX],n,top=-1;


void push(){
    int val;

	if(top==n -1)
	{
		printf("overflow\n");

	}
	else
	{
		scanf("%d",&val);
		top=top+1;
		stack[top]=val;
	}

}
void pop(){
    	if(top==-1)
	{
		printf("underflow\n");
	}
	else
	{
	printf("%d\n",stack[top]);
		top=top-1;
	}
}
void display(){
	int i;
	
	if(top==-1)
	{
	    	printf("underflow");
	}
	else
	{
		for(i=0;i<=top;i++)
			printf("%d ",stack[i]);
	}
	printf("\n");
}
int main()
{
    int option;
    scanf("%d",&n);
   while(1){
    scanf("%d ",&option);
    switch(option){
        case 1: push();
                break;
        case 2:pop();
                break;
        case 3:display();
                break;
        case 4:exit(0);
    }
    }
}