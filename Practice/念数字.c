/*

输入格式：一个整数[-100000, 100000] 

输出格式：
表示这个整数的每一位数字的汉语拼音，每一位数字的拼音之间以空格分隔，末尾没有空格。

输入样例：-30

输出样例： fu san ling

*/

#include <stdio.h>

int main()
{
	int number;  // 要输入的数 
	scanf("%d", &number);
	int t = number;  // 求输入数的位数 
	int mask = 1;  // 用来取数的除数 
	int digit;  // 被取出的数 
	char *alpha;  // 转换后的字符 

	if (number < 0)  // 如果输入是负数 
	{
		printf("fu ");
		number = -number; // 将number和t都取负变为正数 
		t = -t;
	}
	while (t > 9) // 取位数 
	{
		t /= 10;
		mask *= 10;
	}
	while (mask > 0)  // 只要个位数上的数字还没被取走 
	{
		digit = number / mask;  // 取最高位 
		switch (digit)  // 然后判断，给alpha赋值 
		{
			case 9:
				alpha = "jiu";
				break;
			case 8:
				alpha = "ba";
				break;
			case 7:
				alpha = "qi";
				break;
			case 6:
				alpha = "liu";
				break;
			case 5:
				alpha = "wu";
				break;
			case 4:
				alpha = "si";
				break;
			case 3:
				alpha = "san";
				break;
			case 2:
				alpha = "er";
				break;
			case 1:
				alpha = "yi";
				break;
			case 0:
				alpha = "ling";
				break;
		}
		printf("%s", alpha);  // 然后输出alpha 
		if (mask > 9)  // 取完最后一位mask变为1 
		{
			printf(" ");
		}
		number %= mask;
		mask /= 10;
	}
	printf("\n"); 
	return 0;
}

