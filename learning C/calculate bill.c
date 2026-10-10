#include <stdio.h>
#include <stdlib.h>
//引入头文件 本行未校正编码格式的头文件
int main()
{
	//让控制它编码切换为UTF-8编码
	system("chcp 65001");
	//初始化数值
	int price = 0;
	int bill = 0;
	//读入金额和票面
	printf("请输入消费金额：");
	scanf("%d", &price);
	printf("请输入支付票面：");
	scanf("%d", &bill);
	//计算找零
	if ( bill >= price )
	{
	printf("应该找您：%d\n", bill - price);
	}
	if (bill < price)
	{
	printf("恭喜你触发彩蛋 你的钱不够 回家种地赚够钱再来吧 \n");
	}
	//好玩 好玩唉 b（￣▽￣）d　一下子理解程序员设置彩蛋的感觉了 或许等代码复杂了 难了我就不加彩蛋了
	 return 0;
}