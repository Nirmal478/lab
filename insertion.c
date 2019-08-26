#include<stdio.h>

void insertion(int A[],int n)
{
int i,temp,element;
for(i=1;i<n;i++)
{
temp=i;
element=A[i];
while((temp>0)&&(A[temp-1]>element))
{
A[temp]=A[temp-1];
temp=temp-1;
}
A[temp]=element;
}
}
void main()
{
int i,n,A[100];
printf("enter the limit");
scanf("%d",&n);
printf("enter the numbers");
for(i=0;i<n;i++)
{
	scanf("%d",&A[i]);
}
insertion(A,n);
printf("\nthe sorted array is\n");
for(i=0;i<n;i++)
printf("%d",A[i]);
}			
