#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(0));
	int number = rand() % 100 + 1;
	int digit;
	int count = 0;
	
	printf("��һ��1��100���������ɣ�\n");
	
	do
	{
		printf("��������Ĵ𰸣�");
		scanf("%d", &digit);
		if (digit > number)
		{
			printf("�´��ˣ�����һ�Ρ�\n");
		}
		else
		{
			printf("��С�ˣ�����һ�Ρ�\n");
		}
		count++; 
	} while (digit != number);

	printf("��¶���������%d�λ��ᡣ\n", count);
			
	return 0;
}
