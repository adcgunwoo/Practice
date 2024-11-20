#define _crt_no_sesure_warnings
#include <stdio.h>

int main()
{
	int i, a,count[10]={0};

	for (i = 0; i < 100; i++) {
		scanf("%d", &a);
		if (a < 1 || a > 10) {
			break;
		}
		count[a - 1] += 1;
	}
	
	for (int j = 0; j < 10; j++) {
		if (count[j] > 0) {
			printf("%d : %d°³\n", j + 1, count[j]);
		}
	}



	return 0;
}