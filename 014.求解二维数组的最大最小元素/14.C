#include <stdio.h>
#include <limits.h>
#define MAXN 20
int a[MAXN][MAXN];
main()
{
	int min = INT_MAX;	/* 存储最小值 */
	int max = INT_MIN;	/* 存储最大值 */
	int row,col,n;
	printf("Please input the order of the matrix:\n");/* 输入方阵的阶次 */
	scanf("%d",&n);
	printf("Please input the elements of the matrix,\n from a[0][0] to a[%d][%d]:\n",n-1,n-1);
	for(row=0;row<n;row++)
		for(col=0;col<n;col++)
			scanf("%d",&a[row][col]);
	for(row = 0; row < n; row++) {
		for(col = 0;col < n;col++) {
			if(a[row][col] > max) {
				max = a[row][col];
			}
			if(a[row][col] < min) {
				min = a[row][col];
			}
		}
	}
	printf("the max num is %d\n", max);
	printf("the min num is %d\n", min);
}
