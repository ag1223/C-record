#include <stdio.h>

double Temperature(double t);
double k_t;
int main()
{
	int flag;
	double t;

	do
	{
		printf("�����뻪���¶�ֵ:(q to quit) ");
		flag = scanf("%lf", &t);
		if (!flag) break;
		Temperature(t);
		printf("�����¶�:%.2f\n�����¶�:%.2f\n�����¶�:%.2f\n", t, Temperature(t), k_t);
		
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
