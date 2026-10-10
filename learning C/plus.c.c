#include <stdio.h>
#include <stdlib.h>

int main()
{
	system("chcp 65001");
	
	int a;
	int b;
	
	printf("请输入两个整数：");
	scanf("%d %d, &a, &b");
	printf("%d + %d = %d\n", a, b, a + b);
}