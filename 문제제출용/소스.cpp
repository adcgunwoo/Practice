#define _crt_no_sesure_warnings
#include <stdio.h>

int main()
{
	int i, j,a[5],tmp;

	for (i = 0; i < 5; i++) {
		scanf("%d", &a[i]);
	}
	for (i = 0; i < 4; i++) {
		tmp = a[i + 1]; //시작점이 되는 값 또는 Key값
		for (j = i; j > -1; j--) {
			if (a[j] > tmp) {
				a[j + 1] = a[j];
			}
			else {
				break;
			}
		}
		a[j + 1] = tmp;
	}
	
	for (i = 0; i < 5; i++) {
		printf("%d ", a[i]);
	}

	return 0;
}