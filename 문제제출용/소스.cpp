#define _crt_no_secure_warnings
#include <stdio.h>
#include <string.h> //strlen함수를 사용하기 위해 정의
int main()
{
	int i = 0,len;
	char str[50] = "우리나라 대한민국!";
	len = strlen(str);
	printf("%s\n", str);
	printf("위 문자열의 길이는 %d입니다.", len);

	return 0;
}
