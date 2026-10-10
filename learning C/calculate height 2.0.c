#include <stdio.h>
#include <stdlib.h>

int main()
{	
	system("chcp 65001");
	
	printf("请分别输入身高的英尺和英寸，""如输入\"5 7\"表示身高5英尺7英寸");
	
	double foot = 0;
	double inch = 0;
	
	scanf("%lf %lf", &foot, &inch);
	
	printf("身高是%f米。\n",
	((foot + inch / 12.0) * 0.3048));
	
	return 0;
}