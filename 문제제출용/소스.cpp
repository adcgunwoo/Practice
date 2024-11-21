#define _crt_no_sesure_warnings
#include <stdio.h>

int main()
{
	int i,a[101],b[11]={0}; //범위 잘 볼것

	for (i = 0; i < 101; i++) {
		scanf("%d", &a[i]);
		if (a[i] == 0) {
			break;
		}
		b[a[i] / 10]++;
	}
	for (i = 10; i >= 0; i--) { 
		if (b[i] > 0) {
			printf("%d : %d person\n", i * 10, b[i]);
		}
	}


	return 0;
}