#define _crt_no_secure_warnings
#include <stdio.h>
int main()
{
	char a;

	while (1) {
		scanf(" %c", &a);
		printf("%c -> %d\n", a, a);
		if (a == '0') break;
	}

	return 0;
}
