#define _crt_no_secure_warnings
#include <stdio.h>
#include <string.h>
int main()
{   // b�� a�� ���ľ� �ϱ⿡ a�� �迭�� ũ�⸦ 22��ŭ ����
	char a[22], b[11], tmp[11]; 
	scanf("%s %s", a,b);

	strcpy(tmp, a);
	strcpy(a, b);
	strcpy(b, tmp);
	strcat(a, b);
						
	printf("%s", a);

	return 0;
}