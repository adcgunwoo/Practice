#define _crt_no_sesure_warnings
#include <stdio.h>

int main()
{
	int i,j,cnt[100]={0};
	char a[100];

	for (i = 0; i < 100; i++) {
		scanf(" %c", &a[i]);
		if (a[i] < 'A' || a[i]>'Z') {
			break;
		}
		else  {
			cnt[a[i] - 65] += 1;
		}
	}

	for (j = 0; j < 100; j++) {
		if (cnt[j] > 0) {
			printf("%c : %d\n", j+65, cnt[j]);
		}
	}

	return 0;
}