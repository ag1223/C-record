/*

�����ʽ��һ������[-100000, 100000] 

�����ʽ��
��ʾ���������ÿһλ���ֵĺ���ƴ����ÿһλ���ֵ�ƴ��֮���Կո�ָ���ĩβû�пո�

����������-30

��������� fu san ling

*/

#include <stdio.h>

int main()
{
	int number;  // Ҫ������� 
	scanf("%d", &number);
	int t = number;  // ����������λ�� 
	int mask = 1;  // ����ȡ���ĳ��� 
	int digit;  // ��ȡ������ 
	char *alpha;  // ת������ַ� 

	if (number < 0)  // ��������Ǹ��� 
	{
		printf("fu ");
		number = -number; // ��number��t��ȡ����Ϊ���� 
		t = -t;
	}
	while (t > 9) // ȡλ�� 
	{
		t /= 10;
		mask *= 10;
	}
	while (mask > 0)  // ֻҪ��λ���ϵ����ֻ�û��ȡ�� 
	{
		digit = number / mask;  // ȡ���λ 
		switch (digit)  // Ȼ���жϣ���alpha��ֵ 
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
		printf("%s", alpha);  // Ȼ�����alpha 
		if (mask > 9)  // ȡ�����һλmask��Ϊ1 
		{
			printf(" ");
		}
		number %= mask;
		mask /= 10;
	}
	printf("\n"); 
	return 0;
}

