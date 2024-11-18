#define _crt_no_secure_warnings
#include <stdio.h>
int main()
{
	int i;
	char a[10];

	for (i = 0; i < 10; i++) {
		scanf(" %c", &a[i]); //문자를 입력받을 때 무조건 %c앞에 공백!
	}
	for (i = 0; i < 10; i++) {
		printf("%c", a[i]);
	}
	

	return 0;
}