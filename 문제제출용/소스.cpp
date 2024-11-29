#define _crt_no_secure_warnings
#include <stdio.h>
#include <string.h>
int main()
{   
	char a[101],b[100][101];
	fgets(a, 101, stdin);
	int i, j,wcnt=0,wlen=0;
	int len = strlen(a);
	while (a[len - 1] == '\n' || a[len - 1] == '\r') //마지막 값으로 엔터가 같이 입력되므로
		a[--len] = '\0';                             //그 엔터를 공백으로 바꿔줌 
	for (i = 0; i < len; i++) {
		if (a[i] == ' ') {
			b[wcnt][wlen] = '\0';  //입력된 띄어쓰기를 공백값으로 바꿔주고, 
			wcnt += 1;             
			wlen = 0;
		}
		else {
			b[wcnt][wlen] = a[i];
			wlen += 1;
		}
	}
	b[wcnt][wlen] = '\0'; //위 조건문과 같이 마지막 값으로 공백을 넣어줌
	
	for (i = wcnt; i >=0; i--) {
		puts(b[i]);
	}


	return 0;
}