#include <stdio.h>

int Binary_search(int k, int a[], int len);
int main()
{
	int a[11] = {1, 2, 3, 5, 7, 8, 9, 23, 44, 57, 99};
	int len = sizeof(a) / sizeof(a[0]);
	int s, i;
	while (scanf("%d", &i)) {
		s = Binary_search(i, a, len);
		printf("%d\n", s);
	};
	return 0;
}

int Binary_search(int k, int a[], int len)
{
	int left = 0;
	int right = len - 1;
	int ret = -1;
	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		if (a[mid] == k){
			ret = mid;
			break;
		} else if (a[mid] < k){
			left = mid + 1;
		} else if (a[mid] > k){
			right = mid - 1;
		}
	}
	return ret;
}
