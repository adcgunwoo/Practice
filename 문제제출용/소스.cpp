#define _crt_no_secure_warnings
#include <stdio.h>
#include <string.h>
int main()
{   
	char a[101],b[100][101];
	fgets(a, 101, stdin);
	int i, j,wcnt=0,wlen=0;
	int len = strlen(a);
	while (a[len - 1] == '\n' || a[len - 1] == '\r') //������ ������ ���Ͱ� ���� �ԷµǹǷ�
		a[--len] = '\0';                             //�� ���͸� �������� �ٲ��� 
	for (i = 0; i < len; i++) {
		if (a[i] == ' ') {
			b[wcnt][wlen] = '\0';  //�Էµ� ���⸦ ���鰪���� �ٲ��ְ�, 
			wcnt += 1;             
			wlen = 0;
		}
		else {
			b[wcnt][wlen] = a[i];
			wlen += 1;
		}
	}
	b[wcnt][wlen] = '\0'; //�� ���ǹ��� ���� ������ ������ ������ �־���
	
	for (i = wcnt; i >=0; i--) {
		puts(b[i]);
	}


	return 0;
}