#include <stdio.h>

int isCircle(int num) {
	int temp = 0;
	int n = num;
	while(n) {
		temp = temp * 10 + n%10;
		n = n/10;
	} 
	return temp == num;
	
} 

int main() {
	int num;
	while(1) {
		printf(" ‰»Î:");
		scanf("%d", &num);
		if(isCircle(num)) {
			printf(" «\n");
		} else {
			printf("∑Ò\n");
		}
	}
}

