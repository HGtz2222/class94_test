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
	int sum = 0;//�������ս��
	int n = 0;
	int ret = 1;//����n�Ľ׳�
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		// ͨ���ղŵĵ���, �ͷ������������ 16 �д���. 
		// ԭ����, �ڼ��� i=3, ���� 3! ��ʱ��, 
		// ������Ҫ���� 1 * 2 * 3, ������������ʼֵΪ 1 �� ret ����������۳�. 
		// �������� ret �����в������ϴ� i=2 ʱ������ 2! �Ľ��.(ret ��ֵ���� 2)
		// �����������ÿ�μ��� i! ֮ǰ, ���Ȱ� ret ��ֵ��Ϊ 1
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