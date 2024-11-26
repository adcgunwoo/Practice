#define _crt_no_secure_warnings
#include <stdio.h>
#include <string.h> //strlen함수를 사용하기 위해 정의
int main()
{
	int len,i;
	char a[100];
	scanf("%s", a);
	len = strlen(a); //문자의 개수
	printf("입력받은 문자열의 길이는 %d입니다.\n",len);
	for (i = len-1; i >=0; i--) {
		printf("%c", a[i]);
	}

	return 0;
}
