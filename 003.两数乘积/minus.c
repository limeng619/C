#include <stdio.h>

int main() {
	int a, b;
	int m;
	printf("请输入两个数：");
	scanf("%d %d", &a, &b);
	m = a * b;
	printf("%d * %d = %d\n", a, b, m);
	return 0;
}
