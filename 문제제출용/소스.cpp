#define _crt_no_secure_warnings
#include <stdio.h>
#include <string.h> //strlen함수를 사용하기 위해 정의
int main()
{
	char a[100];
	int b,len;

	scanf("%s %d", a, &b);
	len = strlen(a);
	if (b >= len) {
		for (int i = len - 1; i >= 0; i--) {
			printf("%c", a[i]);
		}
	}
	else for (int i = len - 1; i >= len-b; i--) {
		printf("%c", a[i]);
	}

	return 0;
}
