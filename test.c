#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	//int i = 0;
	//int arr[10] = { 0 };
	//for (i = 0; i <= 12; i++)
	//{
	//	arr[i] = 0;
	//	printf("hehe\n");
	//}

	int i = 0;
	int sum = 0;//保存最终结果
	int n = 0;
	int ret = 1;//保存n的阶乘
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		// 通过刚才的调试, 就发现问题出现在 16 行代码. 
		// 原因是, 在计算 i=3, 计算 3! 的时候, 
		// 本来是要计算 1 * 2 * 3, 把这个结果往初始值为 1 的 ret 这个变量上累乘. 
		// 但是由于 ret 变量中残留了上次 i=2 时候计算的 2! 的结果.(ret 的值就是 2)
		// 解决方案就是每次计算 i! 之前, 都先把 ret 的值设为 1
		ret = 1;
		int j = 0;
		for (j = 1; j <= i; j++)
		{
			ret *= j;
		}
		sum += ret;
	}
	printf("%d\n", sum);
	system("pause");
	return 0;
}