#define _crt_no_secure_warning
#include <stdio.h>

int main()
{
	int a,b;
	a = 10, b = 10;

	printf("���ʰ� a = %d, b = %d\n\n", a,b);
	printf("a++ = %d, ++b = %d\n", a++, ++b);
	printf("������ a = %d, b = %d\n\n", a, b);
	printf("a-- = %d, --b = %d\n", a--, --b);
	printf("������ a = %d, b = %d", a, b);


	return 0;
}