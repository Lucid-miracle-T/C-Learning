#include<stdio.h>

int main(void)
{
	int sum = 0;
	int count = 0;
	int number = 0;
	double a;//改为double提高精度

	printf("请输入一个数字（输入-1结束）。");
	scanf_s("%d", &number);
	while (number!=-1)
	{
		count++;
		sum += number;
		printf("请再输入一个数字。");
		scanf_s("%d", &number);
	
	}
	if (count > 0) {
		a = 1.0 * sum / count;
		printf("平均数为%f。\n", a);
	}
	else {
		printf("您没有输入有效数字。\n");
	}

	return 0;


}