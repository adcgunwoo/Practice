#define _crt_no_secure_warning
#include <stdio.h>

int main()
{
	int a, b, c, d, e;

	printf("5���� ���� �Է��Ͻÿ�. ");
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	printf("%d %d %d %d %d", a + 3, b - 3, c * 3, d / 3, e % 3);


	return 0;
}