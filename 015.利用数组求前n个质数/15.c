#include <stdio.h>
#define N 50
main()
{
	int primes[N];
	int k;
	int count = 0;
	int nextNum;/*�����Ե�����3��ʼ*/
	printf("\n The first %d prime numbers are:\n",N);
	primes[0]=2;
	count++;
	nextNum = 3;
	while(count<N) {
		k=0;
		while(primes[k]*primes[k]<=nextNum) {
			if(nextNum%primes[k]==0) {  /*m�Ǻ���*/
			    nextNum+=2;				/*��mȡ��һ������*/
			    k=1;					/*������primes[0]=2ȥ����m������k��һ��ʼ*/
			}
			else
				k++;					/*��������һ������ȥ����*/
		}
		primes[count++]=nextNum;
		nextNum+=2;						/*��2�⣬����������������*/
	}
	for(k=0;k<N;k++)
		printf("%4d",primes[k]);
}
