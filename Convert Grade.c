#include <stdio.h>

int main()
{
	int score;
	char *level;
	printf("��������ĳɼ�:");
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
	printf("��ĳɼ��ȼ�Ϊ%s", level);
	
	return 0;
} 
