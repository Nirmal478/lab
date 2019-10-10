#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*link;
};
struct node* head;
void insertion()
{
   struct  node* newnode= (struct node*)malloc(sizeof(struct node));
   int element,pos,count=0;
   printf("Enter the element\n");
   scanf("%d",&element);
   printf("Enter the position\n");
   scanf("%d",&pos);
    struct node* temp1=head;
    while( temp1!= 0)
    {

        count++;
        temp1=temp1->link;

    }
    if(pos<1 || pos>count+1)
    {
        printf("invalid position\n");
    }
    else
    {
   if(pos==1)
    {
        newnode->data=element;
        newnode->link=head;
        head=newnode;
        printf("element is inserted\n");
    }
    else
    {
    struct node* temp=head;
    int i;
    for(i=1;i<pos-1;i++)
    {
        temp=temp->link;
    }
    newnode->data=element;
    newnode->link=temp->link;
    temp->link=newnode;
    }
    }
}
void deletion()
{
    int count=0;
   struct  node* temp;
   struct  node* temp1;
   struct node* temp2;
   temp=head;
   temp2=head;
    while( temp2!= 0)
    {

        count++;
        temp2=temp2->link;

    }
   int pos;
   printf("Enter the position\n");
   scanf("%d",&pos);
   if(pos==1)
   {
       head=temp->link;
       free(temp);
       return;
   }
    if(pos<1 || pos>=count+1)
    {
        printf("invalid position\n");
    }
    else
        {
   int i;
   for(i=1;i<pos-1;i++)
   {
       temp=temp->link;//n-1 th position
   }
   temp1=temp->link;//points to nth node
   temp->link=temp1->link;//n th node link copy.(n+1)th address.
   free(temp1);
        }


}
void traverse()
{
    struct node* temp=head;
    if(temp==NULL)
    printf("LIST IS EMPTY !!");
    else
    while( temp!= 0)
    {

        printf("%d->",temp->data);
        temp=temp->link;

    }
}
void searching(int element)
{
    int count=0,flag=0;
    struct node* temp = head;
    while(temp!=0)
    {

        if(temp->data==element)
        {
            printf("the element is found at position %d\n",count+1);
	   
	   flag=1;
        }
    count++;
    temp=temp->link;
    }
      if(flag==0)
	{
	printf("the element is not found");
	}
        
      

    

}
int main(void)
{
   head = 0;
   int data;
   int option;
  do
   {

   printf("\n1)Insert\n2)Delete\n3)Traverse\n4)Search\n5)Exit");
   printf("\n Enter your choice : ");
   scanf("%d",&option);
   switch(option)
   {
       case 1: insertion();
               break;
       case 2: deletion();
              break;
       case 3: traverse();
               break;
       case 4:
             printf("Enter the element to be searched");
             scanf("%d",&data);
             searching(data);
             break;
       case 5: break;
        default: printf("Wrong choice");

   }
  }while(option!=5);
}

