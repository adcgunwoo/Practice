#define _crt_secure_no_warnings
#include <stdio.h>

int main()
{
	int a, b;
	printf("두 개의 수를 입력하시오. ");
	scanf("%d %d", &a, &b);
	printf("%d + %d = %d\n", a, b, a + b);
	printf("%d - %d = %d\n", a, b, a - b);
	printf("%d * %d = %d\n", a, b, a * b);
	printf("%d / %d = %d\n", a, b, a / b);
	printf("%d %% %d = %d", a, b, a % b);

	//%를 문자로 나타내고 싶으면 %% 붙여쓰기

	return 0;

}