//շת����������Լ��.

//�ý�С�������ϴ��������������(��һ������)ȥ�� ������
//���ó��ֵ�����(�ڶ�������)����һ������ 

#include <stdio.h>
int main()
{
	int a, b, t;
	int gcd = 0;
	
	scanf("%d %d", &a, &b);
	while (b != 0)  //  bΪ0ʱaΪ���������Լ�� 
	{
		t = a % b;  // t����a����b������ 
		a = b;  // a����b 
		b = t;  // b����t 
		printf("a=%d, b=%d, t=%d\n", a, b, t);
	}
	gcd = a;
	printf("gcd=%d\n", gcd);
	return 0;
 } 
