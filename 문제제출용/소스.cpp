#define _crt_no_secure_warnings
#include <stdio.h>
int main()
{
	int a, b,c;

	scanf("%d %d", &a,&b);
	
	if (a < b) {
		c = a;
		a = b;
		b = c;
	}

	printf("�Է¹��� �� �� ū ���� %d�̰� ���� ���� %d�Դϴ�.", a, b);




	return 0;
}