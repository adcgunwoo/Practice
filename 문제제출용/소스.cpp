#define _crt_no_secure_warnings
#include <stdio.h>
#include <string.h> //strlen�Լ��� ����ϱ� ���� ����
int main()
{
	int i = 0,len;
	char str[50] = "�츮���� ���ѹα�!";
	len = strlen(str);
	printf("%s\n", str);
	printf("�� ���ڿ��� ���̴� %d�Դϴ�.", len);

	return 0;
}
