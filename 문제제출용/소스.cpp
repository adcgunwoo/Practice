#define _crt_no_secure_warnings
#include <stdio.h>
void line()
{
	puts("==============================");
}
int main()
{
	line();
	puts("line 함수를 호출하였습니다.");
	puts("line 함수를 다시 호출합니다.");
	line();

	return 0;
}