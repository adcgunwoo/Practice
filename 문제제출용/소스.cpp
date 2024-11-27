#define _crt_no_secure_warnings
#include <stdio.h>
#include <string.h> //fgets 함수를 사용하기 위해 정의
#include <ctype.h>
int main()
{
	char a[100];
	scanf("%s", a);
	int i,len = strlen(a);
	
	for (i = 0; i < len; i++) {
		if (isupper(a[i])) {
			printf("%c", a[i] + 32);
		}
		else if (islower(a[i])) {
			printf("%c", a[i]);
		}
		else if (isdigit(a[i])) {
			printf("%c", a[i]); //숫자라고 %d로 출력하면 안됨!
		}
	}


	return 0;
}