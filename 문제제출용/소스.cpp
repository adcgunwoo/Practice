#define _crt_no_secure_warnings
#include <stdio.h>
#include <string.h> //fgets 함수를 사용하기 위해 정의

int main()
{
	char a[100];
	int len;
	fgets(a, 100, stdin); //공백을 포함한 문장을 입력받기 위해 함수사용, scanf("%s",a)는 공백이 있으면 따로 인식
	len = strlen(a);
	for (int i = 0; i < len; i++) {
		printf("%c", a[i]);
		if (a[i] == ' ') { // " " 아님 절대 유의할것!
			printf("\n");
		}
	}

	return 0;
}
