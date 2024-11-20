#define _crt_no_sesure_warnings
#include <stdio.h>

int main()
{
	int i, j, a[100],cnt[10]={0},tmp=0;

	for (i = 0; i < 100; i++) {
		scanf("%d", &a[i]);
		if (a[i] == 0) {
			break;
		}
		cnt[a[i]%10]++;
		tmp++;
	}

	for (i = 0; i < tmp; i++) {
		if (cnt[i] > 0) {
			printf("%d : %d°³\n", i, cnt[i]);
		}
	}

	return 0;
}