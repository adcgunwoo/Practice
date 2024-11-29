#define _crt_no_secure_warnings
#include <stdio.h>
#include <string.h>
int main()
{   
	int n,i,j;
	char a[11][101],tmp[101];
	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		scanf("%s", a[i]);
	}
	for (i = 0; i < n-1; i++) {
		for (j = i + 1; j < n; j++) {
			if (strcmp(a[i], a[j]) > 0) {
				strcpy(tmp, a[i]);
				strcpy(a[i],a[j]);
				strcpy(a[j], tmp);
			}
		}
	}
	for (i = 0; i < n; i++) {
		printf("%s\n", a[i]);
	}

	return 0;
}