#define _crt_no_secure_warnings
#include <stdio.h>
#include <string.h> //fgets �Լ��� ����ϱ� ���� ����

int main()
{
	char a[100],tmp,pmt;
	int len, i, j;
	scanf("%s", a);
	len = strlen(a);

	for (i = 0; i < len; i++) {
		tmp = a[len - 1];
		for (j=len-1; j>=0; j--){ // for (j=0; j<len-1; j++) { �������� ���������� ����
			a[j] = a[j-1];	//            a[j] = a[j+1];         
		}
		a[0] = tmp;
		printf("%s \n",a);
	}

	return 0;
}