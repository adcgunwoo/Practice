#define _crt_no_secure_warnings
#include <stdio.h>
int main()
{
	int a;

	while (1) {
		printf("ASCII code =? ");
		scanf("%d", &a);
		if (a<33 || a>127) break;
		printf("%c\n", a);
	}

	return 0;
}
