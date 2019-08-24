#include<stdio.h>
void input(int a[],int n)
{
	printf("enter the number");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
}
void swap(int *a,int *b)
{
	int temp= *a;
	*a=*b;
	*b=temp;
	
}
void bubble(int a[],int n)
{
	int i,j,swapped;
	for(i=0;i<n-1;i++)
	{
		swapped=0;
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
			swap(&a[j],&a[j+1]);
			swapped=1;
			}
		}
		if(swapped==0)
		{
			break;
		}
	}
}

int main()
{
	int n,k;
	printf("enter the count");
	scanf("%d",&n);
	int a[n];
	input(a,n);
	bubble(a,n);
	for(int i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	printf("\nenter the kth \n");
	scanf("%d",&k);
	for(int i=(k-1);i<n;i++)
	{
	printf("%d\n",a[i]);
	}
}
