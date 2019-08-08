#include<stdio.h>
void linear(int A[],int n);
void binary(int A[],int n);
void linear(int A[],int n)
{
int a,b,i,c;
printf("enter the element to be searched");
scanf("%d",&b);
c=0;
for(i=0;i<n;i++)
	{if(A[i]==b)
		{printf("element is present\n");
		c=1;
		}
	}
 if(c==0)
printf("elements not present\n");
}
void binary(int A[],int n)
{int start,end,mid,c,d=0;
start=0;
end=n-1;
printf("enter element to search");
scanf("%d",&c);
while(start<=end)
{
mid=(start+end)/2;
if(A[mid]==c)
{printf("element is present");
d=1;
break;
}
else if(A[mid]>c)
{
end=mid-1;
}
else if(A[mid]<c)
{
start=mid+1;
}
}
if(d==0)
printf("element not present");
}
void main()
{
int A[10],n,a,b,i,c,j,temp,f;
printf("enter the limit");
scanf("%d",&n);
printf("enter the numbers");
for(i=0;i<n;i++)
{
	scanf("%d",&A[i]);
}

for(i=0;i<n;i++)
for(j=0;j<n-i;j++)
{
if(A[j]>A[j+1])
{temp=A[j];
A[j]=A[j+1];
A[j+1]=temp;
}
}
printf("enter 1)linear 2)binary");
scanf("%d",&f);
switch(f)
{
case 1:
linear(A,n);
break;
case 2:
binary(A,n);
break;
}
}
