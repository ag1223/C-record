/*
����ɼ�����ȼ�
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
	printf("��������ĳɼ�:");
	scanf("%d", &score);
	switch (score / 10)  // ���ָ��ɼ�����10 �õ��ĸ�λ�����ܶ�Ӧ��ͬ�ĵȼ� 
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
