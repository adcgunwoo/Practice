#define _crt_no_secure_warnings
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int N,i;
	int* p;
	/*scanf("%d",&N);
	*int a[N];    �� �ּ�ó���� ������� a�� ������ �˼��� �����Ƿ�,����� ������ ��
	*/ 
	scanf("%d", &N);
	p = new int[N];
	for (i = 0; i < N; i++) {
		scanf("%d", p + i);
	}
	for (i = N - 1; i >= 0; i--) {
		printf("%d ", *(p + i));
	}
	delete []p; //�����迭�� �����߱⿡ ���������
	return 0;   //[]�� ������ ���� �տ� �����ؾ���
}