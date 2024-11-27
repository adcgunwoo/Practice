#define _crt_no_secure_warnings
#include <stdio.h>
#include <string.h>
int main()
{
	char a[50][50],st[50];
	int i,j=0,wcnt=0,wlen=0;

	scanf(" %[^\r\n]", st); // scanf는 공백을 포함해서 입력받을 수 없다.
	// %[^\n\r] 는 \n과 \r이 나오기 전까지 입력을 받으라는 것이다. %앞에 공백을 넣어야 함
	int len = strlen(st); 

	for (i = 0; i < len; i++) {
		if (st[i] == ' ') {
			a[wcnt][wlen] = '\0';
			wcnt++;
			wlen = 0;
		}
		else {
			a[wcnt][wlen] = st[i];
			wlen++;
		}
	}
	a[wcnt][wlen] = '\0';
	wcnt++;

	for (i = 0; i < wcnt; i++) {
		puts(a[i]);
	}

	return 0;
}