#include <stdio.h>
void main(void)
{
	int i,j;
	printf("* * * * * * �˷��ھ��� * * * * * * \n");
	for(i = 1;i <= 9;i++) {
		for(j = 1;j <= i;j++) {
			printf("%2d*%2d=%2d ", j, i, i*j);
		}
		printf("\n");
	}
}





















