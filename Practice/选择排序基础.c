#include <stdio.h>

int max(int a[], int len);

int main()
{
	int a[] = {2, 45, 6, 7, 99, 23, 1, -2, 77, 41, 9, 28};
	int len = sizeof(a) / sizeof(a[0]);
	int i;
	for (i=len-1; i>0; i--)
	{
		int max_id = max(a, i+1);
		int t = a[max_id];
		a[max_id] = a[i];
		a[i] = t;
	}
	int k;
	for (k=0; k<len; k++)
	{
		if (k == len - 1)
		{
			printf("%d\n", a[k]);
		} else
		{
			printf("%d ", a[k]);
		}

	}
	return 0;
}

int max(int a[], int len)
{
	int max_id = 0;
	int i;
	for (i=1; i<len; i++)
	{
		if (a[i] > a[max_id])
		{
			max_id = i;
		}
	}
	return max_id;
}
