#define _crt_secure_no_warnings
#include <stdio.h>

int main()
{

	double x, y;

	x = 1.2340;
	y = 10.3459;

	printf("��ü 7�ڸ��� ���߰� �Ҽ� 4�ڸ����� ���\n");
	printf("%c = %7.4lf\n", 'x', x);
	printf("%c = %7.4lf\n\n", 'y', y);
	printf("�Ҽ� 2�ڸ����� ���(�ݿø�)\n");
	printf("%c = %.2lf\n", 'x', x);
	printf("%c = %.2lf\n", 'y', y);

	return 0;

}