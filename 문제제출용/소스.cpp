#define _crt_no_sesure_warnings
#include <stdio.h>

int main()
{
	int i, j,a[4][4]={{0}};

	for (i = 0; i < 3; i++) {
		printf("%d번째 학생의 점수 ",i+1);
		for (j = 0; j < 3; j++) {
			scanf("%d", &a[i][j]);
			a[i][3] += a[i][j];
			a[3][j] += a[i][j];
			a[3][3] += a[i][j];
		}
	}

	printf("     국어 영어 수학 총점\n");
	for (i = 0; i < 4; i++) {
		if (i >= 3) {
			printf("합계");
		}
		else {
			printf(" %d번", i + 1);
		}
		for (j = 0; j < 4; j++) {
			printf("%4d", a[i][j]);
		}
		printf("\n");
	}


	return 0;
}