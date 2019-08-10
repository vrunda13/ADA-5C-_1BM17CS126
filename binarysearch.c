#include <stdio.h>

void binary(int array[],int n,int key)
{
int first = 0,last,middle;
last = n - 1;
middle = (first+last)/2;
 
   while (first <= last) 
	{
         if (array[middle] < key)
		 {
         first = middle + 1;
		 }
         else if (array[middle] == key) 
	  {
         printf("%d found at location %d.\n", key, middle+1);
         break;
      }
      else
	  {
         last = middle - 1;
	  }
	  }
 
      middle = (first + last)/2;
   }
   
   if (first > last)
      printf("Not found! %d isn't present in the list.\n", key);
 
}

int main(int argc, char **argv)
{
	 int n,key,m;
	 printf("enter the number of test case");
	 scanf("%d",&n);
	 for(int i=0;i<n;i++)
	 {
		 printf("enter the count and search element");
		 scanf("%d %d",&key,&m);
		 int a[m];
		 for(int j=0;j<m;j++)
		 {
			 scanf("%d",&a[j]);
			 
		 }
		 binary(a,m,key);
	 }
	 return 0;
}
