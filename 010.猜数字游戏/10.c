#include <stdio.h>
#define ANSWER 51

void main()
{
	int num;
	printf("���������֣�");
	scanf("%d", &num);
	while(num != ANSWER) {
		if(num > ANSWER) {
			printf("BIGGER!");
			printf("���������֣�");
			setbuf(stdin, NULL);
			scanf("%d", &num);
		} else {
			printf("SMALLER!");
			printf("���������֣�");
			setbuf(stdin, NULL);
			scanf("%d", &num);
		}
	}
	printf("ʤ����");
	return 0;
}
