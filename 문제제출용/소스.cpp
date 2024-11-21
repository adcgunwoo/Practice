#define _crt_no_sesure_warnings
#include <stdio.h>

int main()
{
	int i, j, a[5][5]={{0}};
	int cnt=0;

	for (i = 0; i < 5; i++) {
		for (j = 0; j < 4; j++) {
			scanf("%d", &a[i][j]);
			a[i][4] += a[i][j];
		}
	}
	for (i = 0; i < 5; i++) {
		if (a[i][4] >= 320) {
			printf("pass\n");
			cnt++;
		}
		else {
			printf("fail\n");
		}
	}
	printf("Successful : %d", cnt);

	return 0;
}