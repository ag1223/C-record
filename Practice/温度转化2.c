#include <stdio.h>

double Temperature(double t);
double k_t;
int main()
{
	int flag;
	double t;

	do
	{
		printf("请输入华氏温度值:(q to quit) ");
		flag = scanf("%lf", &t);
		if (!flag) break;
		Temperature(t);
		printf("华氏温度:%.2f\n摄氏温度:%.2f\n开氏温度:%.2f\n", t, Temperature(t), k_t);
		
	} while(flag);
	return 0;
}

double Temperature(double t)
{
	double s_t;
	const double k = 273.16;
	s_t = 5.0 / 9.0 * (t - 32.0);
	k_t = s_t + 273.6;
	return s_t;
}
