#include <stdio.h> // 引入头文件
#include <stdlib.h>

int main()
{
	system("chcp 65001");//让控制台也切换为UTF-8 编码
	
	int amount = 100;
	int price = 0;
	
	printf("请输入金额(元)");
	scanf("%d",&price);
	
	printf("请输入票面");
	scanf("%d", &amount);
	
	int change = amount - price;
	
	printf("找您%d元\n", change);
	
	return 0;//写到这里我感觉我简直就是天才
}