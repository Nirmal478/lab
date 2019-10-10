#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node* link;
};
struct node* front = NULL;
struct node* rear = NULL;
struct node* temp;

void enq();
void deq();
void disp();

void main(void){
	int ch;
	while(1){
	printf("\nMENU\n====\n1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n\nEnter your choice");
	scanf("%d", &ch);
		switch(ch){
			case 1 : enq();
					 break;
			case 2 : deq();
					 break;
			case 3 : disp();
					 break;
			case 4 : exit(0);
			default : printf("Invalid input\n");
		}
	}
}

void enq(){
	int x;
	struct node* newnode;
	newnode = (struct node*)malloc(sizeof(struct node));
	printf("Enter data to be inserted : ");
	scanf("%d", &x);
	if(front == NULL){
		newnode->data = x;
		newnode->link = NULL;
		front = newnode;
                rear=newnode;
	}
	else{
		newnode->data = x;
		newnode->link = NULL;
		rear->link = newnode;
		rear = newnode;
	}
	printf("\nElement Enqueued\n");
}

void deq(){
	if(front == NULL)
		printf("Queue is empty\n");
	else{
		temp = front;
		front = front->link;
		free(temp);
		printf("\nElement Dequeued");
	}
	
}

void disp(){
	if(front == NULL){
		printf("Queue empty\n");
		return;
	}
	temp = front;
	printf("Elements ::");
	while(temp!= NULL){
		printf("%d\n", temp->data);
		temp = temp->link;
	}
	printf("\n");
}

