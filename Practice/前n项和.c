#include <stdio.h>

//  求前n项和, 一减二分之一加三分之一减四分之一。。。。。。 

int main()
{
	int n;
	int i;
	double sum = 0.0;
	double sign = 1.0;
	
	scanf("%d", &n);
	for (i=1; i<=n; i++)
	{
		sum += sign / i;
		sign = -sign;
	}
	printf("f(%d)=%f", n, sum);
	
	return 0;
 } 
