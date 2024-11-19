#define _crt_no_sesure_warnings
#include <stdio.h>

int main()
{
	int i,j,a[100],cnt=0;

	for (i = 0; i < 100; i++) {
		scanf("%d", &a[i]);
		if (a[i] == -1) {
			break;
		}
		cnt++;
	}

	if (cnt > 3) {
		for (i = cnt - 3; i < cnt; i++) {
			printf("%d ", a[i]);
		}
	}
	else {
		for (i = 0; i < cnt; i++) {
			printf("%d ", a[i]);
		}
	}

	return 0;
}