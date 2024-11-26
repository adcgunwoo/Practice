#define _crt_no_secure_warnings
#include <stdio.h>
#include <ctype.h> // 문자type과 관련된 함수들이 정의되어있음.
#include <string.h>

int main()
{
	char a[100];
	int len;

	scanf("%s", a);
	len = strlen(a);
	for (int i = 0; i < len; i++) {
		if (isupper(a[i])) {
			a[i] += 32;
		}
		else if (islower(a[i])) {
			a[i] -= 32;
		}
	}
	for (int i = 0; i < len; i++) {
		printf("%c", a[i]);
	}

	return 0;
}
