#include <stdio.h>
#define N 50
main()
{
	int primes[N];
	int k;
	int count = 0;
	int nextNum;/*被测试的数从3开始*/
	printf("\n The first %d prime numbers are:\n",N);
	primes[0]=2;
	count++;
	nextNum = 3;
	while(count<N) {
		k=0;
		while(primes[k]*primes[k]<=nextNum) {
			if(nextNum%primes[k]==0) {  /*m是合数*/
			    nextNum+=2;				/*让m取下一个奇数*/
			    k=1;					/*不必用primes[0]=2去测试m，所以k从一开始*/
			}
			else
				k++;					/*继续用下一个质数去测试*/
		}
		primes[count++]=nextNum;
		nextNum+=2;						/*除2外，其余质数均是奇数*/
	}
	for(k=0;k<N;k++)
		printf("%4d",primes[k]);
}
