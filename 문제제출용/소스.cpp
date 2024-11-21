#define _crt_no_sesure_warnings
#include <stdio.h>

int main()
{
	int i, j, a[6][6] = {{0}}; //파스칼의 삼각형
	
	a[1][1] = 1;

	for (i = 2; i < 6; i++) {
		for (j = 1; j <= i; j++) { // 피라미드 방식으로 출력해야하므로 조건식을 i까지
			a[i][j] = a[i-1][j-1] + a[i-1][j];
		}
	}

	for (i = 1; i < 6; i++) {
		for (j = 1; j <= i; j++) {
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}