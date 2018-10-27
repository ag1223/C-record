//辗转相除法求最大公约数.

//用较小的数除较大的数，再用余数(第一个余数)去除 除数，
//再用出现的余数(第二个余数)除第一个余数 

#include <stdio.h>
int main()
{
	int a, b, t;
	int gcd = 0;
	
	scanf("%d %d", &a, &b);
	while (b != 0)  //  b为0时a为两数的最大公约数 
	{
		t = a % b;  // t等于a除以b的余数 
		a = b;  // a等于b 
		b = t;  // b等于t 
		printf("a=%d, b=%d, t=%d\n", a, b, t);
	}
	gcd = a;
	printf("gcd=%d\n", gcd);
	return 0;
 } 
