#include<stdio.h>
void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 
  
void selectionSort(int arr[], int n) 
{ 
    int i, j, min_idx; 
    for (i = 0; i < n-1; i++) 
    { 
        min_idx = i; 
        for (j = i+1; j < n; j++) 
          if (arr[j] < arr[min_idx]) 
            min_idx = j; 
  
        swap(&arr[min_idx], &arr[i]); 
    } 
} 
  
void printArray(int arr[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        printf("%d   ", arr[i]); 
   
} 
void main()
{
	int n,k;
	printf("enter the count");
	scanf("%d",&n);
	int a[n];
	printf("enter the element");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	selectionSort(a,n);
	printArray(a,n);
	printf("kth\n");
	scanf("%d",&k);
	for(int i=(k-1);i<n;i++)
	{
		printf("%d  ",a[i]);
	}
}
