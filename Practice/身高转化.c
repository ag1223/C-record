/*
Ӣ��foot��Ӣ��inch����ô��Ӧ������(foot+inch/12)��0.3048��������1Ӣ�ߵ���12Ӣ�硣
�����ʽ��
������һ���и���1������������λ�����ס�
�����ʽ��
��һ������������������ӦӢ�Ƴ��ȵ�Ӣ�ߺ�Ӣ�������ֵ���м��ÿո�ֿ���
*/
#include <stdio.h>

int main()
{
	int foot, inch;
	int height;
	scanf("%d", &height);
	foot = height / 100.0 / 0.3048;
	inch = (height / 100.0 / 0.3048 - foot) * 12;
	printf("%d %d", foot, inch);
	return 0;
}



