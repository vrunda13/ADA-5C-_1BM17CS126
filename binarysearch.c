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
	 for(int i=0;i<argv[0];i++)
	 {
		 int a[(argv[1]];
		 for(int j=0,k=3;j<argv[1];j++,k++)
		 {
			 a[i]=argv[k]
		 }
		 }
		 
		 binary(a,m,argv[2]);
	 }
	 return 0;
}
