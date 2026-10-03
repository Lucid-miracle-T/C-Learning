#include <stdio.h>
int main()
{
	int a, b, c;
	scanf_s("%d %d %d", &a, &b, &c);
	int max = 0;
	if (a > b) {
		if (a > c) { 
			max = a; }
		else { 
			max = c; }
	}
	else {
		if (c > b) {
			max = c;
		}
		else {
			max = b;
		}
	}
		printf("最大值为%d。\n", max);

		return 0;
	

}