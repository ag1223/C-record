//�����ֽ� ������:13425 ���: 1 3 4 2 5  (5����û�ո�)

#include <stdio.h>

int main()
{
	int number;
	printf("������һ��������:");
	scanf("%d", &number);
	int t = number;  // t���ڼ���mask�Ĵ�С����Ϊnumber��ֵλ������ 
	int mask = 1;
		
	while ( t > 9)
	{
		t /= 10;
		mask *= 10;
	}
	printf("number=%d, mask=%d\n", number, mask);
	
	while (mask > 0)
	{
		int digit = number / mask; // ȡnumber�����λ 
		printf("%d", digit);
		if (mask >= 10)  // ���number���Ǹ�λ���Ļ��� 
		{
			printf(" ");  // ��λȡ�겻�üӿո� 
		}
		number %= mask;  // ��numberȥ�����λ 
		mask /= 10;   // mask��Ϊԭ����10��֮һ 
	} 
	printf("\n");
 } 
