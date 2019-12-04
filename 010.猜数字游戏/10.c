#include <stdio.h>
#define ANSWER 51

void main()
{
	int num;
	printf("请输入数字：");
	scanf("%d", &num);
	while(num != ANSWER) {
		if(num > ANSWER) {
			printf("BIGGER!");
			printf("请输入数字：");
			setbuf(stdin, NULL);
			scanf("%d", &num);
		} else {
			printf("SMALLER!");
			printf("请输入数字：");
			setbuf(stdin, NULL);
			scanf("%d", &num);
		}
	}
	printf("胜利！");
	return 0;
}
