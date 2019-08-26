#include<stdio.h>
void bubble(int A[],int n);
void bubble(int A[],int n)
{
int i,j,temp;
for(i=0;i<n;i++)
for(j=0;j<n-i;j++)
{
if(A[j]>A[j+1])
{temp=A[j];
A[j]=A[j+1];
A[j+1]=temp;
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
bubble(A,n);
printf("\nthe sorted array is\n");
for(i=0;i<n;i++)
printf("%d",A[i]);
}
