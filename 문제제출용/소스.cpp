#define _crt_no_secure_warnings
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i,a[5];
	int* p = a;
	
	for (i = 0; i < 5; i++) {
		scanf("%d", p+i);
	}
	for (i = 0; i < 5; i+=2) {
		printf("%d ", *(p+i)); //�����Ϳ��� �迭�� ǥ���ϴ� ���
	}
	/*
	for (i=0; i<5; i+=2){
		printf("%d ",a[i]); //�Ϲ����� �迭 ���
	}
	*/

	return 0;
}