#define _crt_no_secure_warnings
#include <stdio.h>
#include <string.h>
int main()
{   
	char a[20], b[20], c[20];

	scanf("%s %s %s", a, b, c);
	
	if (strcmp(b, a) > 0 && strcmp(c, a) > 0) {
		printf("%s", a);
	}
	else if (strcmp(a, b) > 0 && strcmp(c, b) > 0) {
		printf("%s", b);
	}
	else if (strcmp(a, c) > 0 && strcmp(b, c) > 0) {
		printf("%s", c);
	}
	return 0;
}