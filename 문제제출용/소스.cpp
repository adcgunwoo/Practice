#define _crt_no_secure_warnings
#include <stdio.h>
#include <string.h> //strlen�Լ��� ����ϱ� ���� ����
int main()
{
	int len,i;
	char a[100];
	scanf("%s", a);
	len = strlen(a); //������ ����
	printf("�Է¹��� ���ڿ��� ���̴� %d�Դϴ�.\n",len);
	for (i = len-1; i >=0; i--) {
		printf("%c", a[i]);
	}

	return 0;
}
