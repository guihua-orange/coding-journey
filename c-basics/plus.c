#include <stdio.h>
#include <stdlib.h>//引入头文件

int main()
{
	system("chcp 65001");//让控制台也切换为UTF-8编码
	
	int a;
	int b;
	
	printf("请输入两个整数");
	scanf("%d %d", &a, &b);
	printf("%d + %d = %d\n", a, b, a + b);
	
	return 0;
}