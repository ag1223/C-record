#include <stdio.h>

int main()
{
	int score;
	char *level;
	printf("请输入你的成绩:");
	scanf("%d", &score);
	switch (score / 10)
	{
		case 10:
		case 9: 
			level = "A";
			break;
		case 8:
			level = "B";
			break;
		case 7:
			level = "C";
			break;	
		case 6:
			level = "D";
			break;
		default:
			level = "E"; 
	}
	printf("你的成绩等级为%s", level);
	
	return 0;
} 
