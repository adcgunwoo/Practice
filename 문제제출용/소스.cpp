#define _crt_no_secure_warnings
#include <stdio.h>
int main()
{
	int i;
	char a[26],alpha='A';
	for (i = 0; i < 26; i++) {
		a[i] = alpha++;
		//a[i]='A' + i 의 형태로도 작성 가능
	}
	for (i = 25; i >= 0; i--) {
		printf("%c ", a[i]);
	}
	
	

	return 0;
}