#include <stdio.h>
#include <stdlib.h>
//引入文件
int main()
{
	//转化编码为UTF-8
	system("chcp 65001");
	
	const double RATE = 8.25;
	const int STANDARD = 40;
	double pay = 0.0;
	int hours;
	
	printf("请输入工作的小时数");
	scanf("%d", &hours);
	printf("\n");
	if (hours > STANDARD)
	    pay = STANDARD * RATE + (hours-STANDARD) * (RATE * 1.5);
	else
	    pay = hours * RATE;
	printf("应付工资：%f\n", pay);
	
}