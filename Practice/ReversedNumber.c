#include <stdio.h>


int main()
{
	int number;
	int digit;
	int result = 0;
	
	scanf("%d", &number);
	while (number > 0)
	{
		digit = number % 10;
		result = 10 * result + digit;
		printf("number=%d, digit=%d, result=%d\n", number, digit, result);
		number /= 10;
	}
	printf("%d\n", result);
	
	return 0;
}
