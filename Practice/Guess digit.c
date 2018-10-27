#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(0));
	int number = rand() % 100 + 1;
	int digit;
	int count = 0;
	
	printf("猜一个1到100的正整数吧！\n");
	
	do
	{
		printf("请输入你的答案：");
		scanf("%d", &digit);
		if (digit > number)
		{
			printf("猜大了，再试一次。\n");
		}
		else
		{
			printf("猜小了，再试一次。\n");
		}
		count++; 
	} while (digit != number);

	printf("你猜对啦！用了%d次机会。\n", count);
			
	return 0;
}
