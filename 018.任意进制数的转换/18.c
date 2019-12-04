#define M (sizeof(unsigned int)*8)

/* ����trans���޷�������n�����d��2,3,8,16������,�洢���ַ���s�� */
void trans(unsigned n, int d, char *s) {
	char digit[] = "0123456789ABCDEF";
	char buf[M+1];
	int i = M;
	buf[i] = '\0';
	do{
		int temp = n%d;
		buf[--i] = digit[temp];
		n = n/d;
	} while(n);
	for( ; i<=M; i++) {
		*s++ = buf[i];
	}
	return;
}
/* ���������ڲ��Ժ��� trans() */
int main()
{
	unsigned int num = 253;
	int scale[]={2,3,10,16};
	char str[M+1];
	int i;
	for(i=0;i<sizeof(scale)/sizeof(scale[0]);i++)
	{
		trans(num, scale[i], str);
		printf("%5d = %s(%d)\n",num,str,scale[i]);
	}
	return 0;
}
