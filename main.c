#include <stdio.h>
#include<time.h>
clock_t start,end;
int sqr(int x)
{
	if (x < 2)
		return x;
		
	int result;
    int start = 1;
	int end = x/2;

	while (start <= end)
	{
	    int mid = (start + end) / 2;
		long sqr = mid*mid;
         if (sqr == x)
			return mid;
		else if (sqr < x)
		{
			start = mid + 1;
			result = mid;
		}
		else
		{
			end = mid - 1;
		}
	}

	return result;
}
	


int main(int argc, char **argv)
{
	int x,y;
	start=clock();
	printf("enter the number");
	scanf("%d",&x);
	y=sqr(x);
	printf("%d\n",y);
	end=clock();
	double t = (double)(end-start)/(double)(CLOCKS_PER_SEC);
	printf("%lf",t);
	return 0;
}
