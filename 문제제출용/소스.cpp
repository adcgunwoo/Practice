#define _crt_no_secure_warnings
#include <stdio.h>
#include <stdlib.h> //atoi, atof �Լ��� ����ϱ� ���� ����
int main()
{   
	char a[11], b[11], n[11], m[11];
	
	scanf("%s %s", a, b);
	scanf("%s %s", n, m);
	
	printf("%d + %d = %d\n", atoi(a), atoi(b), atoi(a) + atoi(b));
	printf("%.2lf + %.2lf = %.2lf\n", atof(n), atof(m), atof(n) + atof(m));

	return 0;
}