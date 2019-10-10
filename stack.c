#include<stdio.h>
#define MAX 5
int top=-1,stack[MAX];
void push();
void pop();
void display();
void push()
{
	int val;

	if(top==MAX-1)
	{
		printf("\nStack is full");
	}
	else
	{
		printf("\nEnter element to push:");
		scanf("%d",&val);
		top=top+1;
		stack[top]=val;
	}
}
void pop()
{
  

  if(top==-1)
	  printf("\nStack is empty\n");

  else
  {
	  printf("\nThe deleted element is %d\n",stack[top]);
	  top=top-1;
  }
}
void display()
{
	int i;

	if(top==-1)
		printf(" \nstack is empty\n");

	else
	{
		printf("\n The stack elements are : \n");
		for(i=top;i>=0;--i)
			printf("%d\n",stack[i]);
	}
}
 
void main()
{
int a,b;
do
{
printf("press 1)push 2)pop 3)display 4)exit");
scanf("%d",&a);
if(a==1)
{
push();
}
else if(a==2)
{
pop();
}
else if(a==3)
{
display();
}
}
while(a!=4);
}
