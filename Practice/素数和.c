/* 
������Ϊ2�ǵ�һ��������3�ǵڶ���������5�ǵ������������������ơ�
���룺������������һ����ʾn���ڶ�����ʾm��n,m 0��200֮�� 
�����һ����������ʾ��n����������m������֮�����е������ĺͣ�������n���͵�m������ 
���� 2 4  ��� 15 
*/
#include <stdio.h>

int main()
{
	int n, m;
	printf("������n��m��ֵ(n<=m):");
	scanf("%d %d", &n, &m);
	int digit = 1;  // �ñ��жϵ��Ǹ������� 
	int cnt = 0;  
	int sum = 0;
	int a = 2;  // ����һ������ѭ���ĳ���a 

	while (cnt < m)
	{
		int isPrime = 1;
		digit++;  // ÿ��ѭ������digit��һ 
		for (a=2; a<digit; a++)  // a�ķ�Χ��2��digit-1 
		{
			if (digit % a == 0)  // ����ܱ�������ֱ��������ѭ�� 
			{
				isPrime = 0;
				break;  // ��������ѭ��֮�����ж���һ�� isPrime��ֵ 
			}		
		}
		if ( isPrime == 1)
			{
				cnt++;  // ÿ��digit��������ʱ��cnt+1 
				
				if (cnt >= n && cnt <= m)  // ��������ĸ�����n��m֮�� 
				{
					printf("%d ", digit);
					sum += digit;  // �Ͱ�������� 
				}
			}
	}
	printf("\nsum=%d\n", sum);
	return 0;
}


// ���ж������������ дһ������

int isPrime(int digit)
{
	int flag = 1;
	int k;
	for (k=2; k<digit; k++)
	{
		if (digit % k == 0)
		{
			flag = 0;
			break;
		}
	}
	return flag;
}

int main()
{
	int n, m;
	printf("������n��m��ֵ(n<=m):");
	scanf("%d %d", &n, &m);
	int sum = 0;
	int digit = 1;
	int cnt = 0;
	
	while (cnt < m)
	{
		digit++;
		if (isPrime(digit))
		{
			cnt++;
			if (cnt >= n && cnt <= m)
			{
				sum += digit;
				printf("%d ", digit);
			}
		}
	}
	printf("\nsum=%d\n", sum);
	return 0;
} 
