#include <stdio.h>
#include <stdlib.h>

int main()
{	
	system("chcp 65001");
	
	printf("请分别输入身高的英尺和英寸，""如输入\"5 7\"表示身高5英尺7英寸");
	
	int foot = 0;
	int inch = 0;
	
	scanf("%d %d", &foot, &inch);
	
	printf("身高是%f米。\n",
	((foot + inch / 12.0) * 0.3048));//之前第一次算出来 我身高1.5和身高2000多
	
	return 0;
}