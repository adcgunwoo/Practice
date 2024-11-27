#define _crt_no_secure_warnings
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int N;
int main()
{
	char a[100];
	int len,j,cnt=0,n;
	scanf("%s", a);
	len = strlen(a);
	while(1) {
		scanf("%d", &n);
		if (n >= len) {
			n = len;
		}
		for (j = 0; j < len; j++) {
			if (n != j + 1) {
				printf("%c", a[j]);
				a[cnt++] = a[j];
			}
		}
		len -= 1;
		printf("\n");
		cnt = 0;
		if (len == 1) break;
	}
	return 0;
}