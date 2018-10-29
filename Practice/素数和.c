/* 
我们认为2是第一个素数，3是第二个素数，5是第三个素数，依次类推。
输入：两个整数，第一个表示n，第二个表示m。n,m 0到200之间 
输出：一个整数，表示第n个素数到第m个素数之间所有的素数的和，包括第n个和第m个素数 
输入 2 4  输出 15 
*/
#include <stdio.h>

int main()
{
	int n, m;
	printf("请输入n和m的值(n<=m):");
	scanf("%d %d", &n, &m);
	int digit = 1;  // 用被判断的那个正整数 
	int cnt = 0;  
	int sum = 0;
	int a = 2;  // 定义一个用于循环的除数a 

	while (cnt < m)
	{
		int isPrime = 1;
		digit++;  // 每次循环结束digit加一 
		for (a=2; a<digit; a++)  // a的范围是2到digit-1 
		{
			if (digit % a == 0)  // 如果能被整除，直接跳出内循环 
			{
				isPrime = 0;
				break;  // 这里跳出循环之后还是判断了一下 isPrime的值 
			}		
		}
		if ( isPrime == 1)
			{
				cnt++;  // 每当digit是素数的时候cnt+1 
				
				if (cnt >= n && cnt <= m)  // 如果素数的个数在n到m之间 
				{
					printf("%d ", digit);
					sum += digit;  // 就把他们相加 
				}
			}
	}
	printf("\nsum=%d\n", sum);
	return 0;
}


// 将判断素数这个过程 写一个函数

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
	printf("请输入n和m的值(n<=m):");
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
