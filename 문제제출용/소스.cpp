#define _crt_no_secure_warnings
#include <stdio.h>
#include <string.h>
int main()
{
	char a[50][50],st[50];
	int i,j=0,wcnt=0,wlen=0;

	scanf(" %[^\r\n]", st); // scanf�� ������ �����ؼ� �Է¹��� �� ����.
	// %[^\n\r] �� \n�� \r�� ������ ������ �Է��� ������� ���̴�. %�տ� ������ �־�� ��
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