#define _crt_no_sesure_warnings
#include <stdio.h>

int main()
{
	int i, j,a[4][4]={{0}};

	for (i = 0; i < 3; i++) {
		printf("%d��° �л��� ���� ",i+1);
		for (j = 0; j < 3; j++) {
			scanf("%d", &a[i][j]);
			a[i][3] += a[i][j];
			a[3][j] += a[i][j];
			a[3][3] += a[i][j];
		}
	}

	printf("     ���� ���� ���� ����\n");
	for (i = 0; i < 4; i++) {
		if (i >= 3) {
			printf("�հ�");
		}
		else {
			printf(" %d��", i + 1);
		}
		for (j = 0; j < 4; j++) {
			printf("%4d", a[i][j]);
		}
		printf("\n");
	}


	return 0;
}