/*
数字倒序，输入一个数，逆序输出，700的话要输出7 
*/ 
#include <stdio.h>

int main()
{
	int number;
	int digit;
	int result = 0;
	
	scanf("%d", &number);
	while (number > 0)
	{
		digit = number % 10;  // 每次获得number的个位数 
		result = 10 * result + digit;  // 
		printf("number=%d, digit=%d, result=%d\n", number, digit, result);
		number /= 10;  // 获得新的number 
	}
	printf("%d\n", result);
	
	return 0;
}
