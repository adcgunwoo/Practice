#define _crt_no_secure_warnings
#include <stdio.h>
#include <string.h>
int main()
{
	char a[50], b[50],tmp[50];
	int i, j,len1,len2;

	scanf("%s %s", a, b);
	len1 = strlen(a);
	len2 = strlen(b);

	if (len1 > len2) {
		strcpy(tmp, a);
		strcpy(a, b);
		strcpy(b, tmp);
	}
	printf("%s\n%s", a, b);

	return 0;
}