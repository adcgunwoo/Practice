#define _crt_no_secure_warnings
#include <stdio.h>
#include <string.h> //fgets �Լ��� ����ϱ� ���� ����

int main()
{
	char a[50],tmp;
	int len,i,j;
	scanf("%s", a); //fgets�� ������ �ִ� ���ڿ��� �ϳ��� �޴°����� �׳� ���ڿ��� �ȵ�.
	len = strlen(a);
	for (i = 0; i < len; i++) {
		tmp = a[0]; // a �迭�� ���� ���ԵǸ鼭 �ٲ���ֱ⿡, 
		for (j = 0; j < len-1; j++) {
			a[j] = a[j+1];
		}
		a[len - 1] = tmp;
		printf("%s \n", a);
	}


	return 0;
}