#define _crt_no_secure_warnings
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i,a[3],b[3];
	char arr[100],brr[100];
	int* p = a;
	int* pi = b;
	char* q = arr;
	char *qi = brr;
	for (i = 0; i < 3; i++) {	
		scanf("%d", p + i);
	}
	for (i = 0; i < 3; i++) {
		scanf("%d", pi + i);
	}
	scanf(" %s", q);
	scanf(" %s", qi);
	for (i = 0; i < 3; i++) {
		printf("%d ", *(p + i));  //�������� ����� �� *�� �ٿ�����
	}
	printf("\n");
	for (i = 0; i < 3; i++) {
		printf("%d ", *(pi + i));
	}
	printf("\n");
	printf("%s\n", q); //���ڿ��� *�� ���̸� �ȵ�
	printf("%s\n", qi);

	return 0;
}