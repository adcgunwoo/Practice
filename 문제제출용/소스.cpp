#define _crt_no_secure_warnings
#include <stdio.h>
int main()
{
	int a;

	scanf("%d", &a);
	printf("%d\n", a);
	if (a > 10) {
		printf("10���� ū ���� �Է��ϼ̽��ϴ�.");
	}

	return 0;
}