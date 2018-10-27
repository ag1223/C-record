//整数分解 。输入:13425 输出: 1 3 4 2 5  (5后面没空格)

#include <stdio.h>

int main()
{
	int number;
	printf("请输入一个正整数:");
	scanf("%d", &number);
	int t = number;  // t用于计算mask的大小，因为number的值位数不定 
	int mask = 1;
		
	while ( t > 9)
	{
		t /= 10;
		mask *= 10;
	}
	printf("number=%d, mask=%d\n", number, mask);
	
	while (mask > 0)
	{
		int digit = number / mask; // 取number的最高位 
		printf("%d", digit);
		if (mask >= 10)  // 如果number不是个位数的话。 
		{
			printf(" ");  // 个位取完不用加空格 
		}
		number %= mask;  // 将number去掉最高位 
		mask /= 10;   // mask变为原来的10分之一 
	} 
	printf("\n");
 } 
