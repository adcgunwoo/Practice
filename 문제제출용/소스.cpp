#define _crt_no_secure_warnings
#include <stdio.h>
#include <string.h> //fgets �Լ��� ����ϱ� ���� ����
#include <ctype.h>
int main()
{
	char a[100];
	scanf("%s", a);
	int i,len = strlen(a);
	
	for (i = 0; i < len; i++) {
		if (isupper(a[i])) {
			printf("%c", a[i] + 32);
		}
		else if (islower(a[i])) {
			printf("%c", a[i]);
		}
		else if (isdigit(a[i])) {
			printf("%c", a[i]); //���ڶ�� %d�� ����ϸ� �ȵ�!
		}
	}


	return 0;
}