#define _crt_no_secure_warnings
#include <stdio.h>
#include <string.h>
int main()
{   
	char a[20], b[20];
	scanf("%s %s", a, b);

	if (strcmp(a, b)==0) {
		printf("�� ���ڿ��� �����ϴ�.\n");
	}
	else if (strcmp(a, b)>0) {
		printf("%s ��(��) �� Ů�ϴ�.\n", a);
	}
	else {
		printf("%s ��(��) �� Ů�ϴ�.\n", b);
	}

	if (strncmp(a, b, 3)==0) {
		printf("���� �� ���ڰ� �����ϴ�.");
	}
	else {
		printf("���� �� ���ڰ� ���� �ʽ��ϴ�.");
	}
	return 0;
}