#include <stdio.h>
void swap(int *xp, int *yp)  
{  
    int temp = *xp;  
    *xp = *yp;  
    *yp = temp;  
}  
void sort(int a[],int n)
{
	int flag;
	int i,j;
	for(i=0;i<n-1;i++)
	{
		flag=0;
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				swap(&a[j],&a[j+1]);
				flag=1;
			}
			
		}
		if(flag==0)
		{
			break;
			
		}
	}
}


int main(int argc, char **argv)
{
	int n;
	printf("Enter the n numbers");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	sort(a,n);
	printf("%d is the largest element in array",a[n-1]);
	return 0;
}
