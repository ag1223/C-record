/*
输入成绩输出等级
90-100	A
80-89	B
70-79	C
60-69	D
0-59	E 
*/ 
#include <stdio.h>

int main()
{
	int score;
	char *level;
	printf("请输入你的成绩:");
	scanf("%d", &score);
	switch (score / 10)  // 发现给成绩除以10 得到的个位数就能对应不同的等级 
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
