#define _crt_no_secure_warnings
#include <stdio.h>
#include <string.h> //fgets �Լ��� ����ϱ� ���� ����

int main()
{
	char a[100];
	int len;
	fgets(a, 100, stdin); //������ ������ ������ �Է¹ޱ� ���� �Լ����, scanf("%s",a)�� ������ ������ ���� �ν�
	len = strlen(a);
	for (int i = 0; i < len; i++) {
		printf("%c", a[i]);
		if (a[i] == ' ') { // " " �ƴ� ���� �����Ұ�!
			printf("\n");
		}
	}

	return 0;
}
