#define _crt_no_secure_warnings
#include <stdio.h>
int main()
{
	int i;
	char a[10];

	for (i = 0; i < 10; i++) {
		scanf(" %c", &a[i]); //���ڸ� �Է¹��� �� ������ %c�տ� ����!
	}
	for (i = 0; i < 10; i++) {
		printf("%c", a[i]);
	}
	

	return 0;
}