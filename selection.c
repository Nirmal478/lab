#include<stdio.h>
void selection(int A[],int n);
void selection(int A[],int n)
{
int i,j,temp,min;
for(i=0;i<n;i++)
{
min=i;
for(j=i+1;j<n;j++)
if(A[j]<A[min])
{
temp=A[j];
A[j]=A[min];
A[min]=temp;
}
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
selection(A,n);
printf("\nthe sorted array is\n");
for(i=0;i<n;i++)
printf("%d",A[i]);
}
