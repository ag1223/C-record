/*
英尺foot和英寸inch，那么对应的米是(foot+inch/12)×0.3048。别忘了1英尺等于12英寸。
输入格式：
输入在一行中给出1个正整数，单位是厘米。
输出格式：
在一行中输出这个厘米数对应英制长度的英尺和英寸的整数值，中间用空格分开。
*/
#include <stdio.h>

int main()
{
	int foot, inch;
	int height;
	scanf("%d", &height);
	foot = height / 100.0 / 0.3048;
	inch = (height / 100.0 / 0.3048 - foot) * 12;
	printf("%d %d", foot, inch);
	return 0;
}



