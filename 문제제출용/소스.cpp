#define _crt_no_sesure_warnings
#include <stdio.h>

int main()
{
	int i, j, a[6][6] = {{0}}; //�Ľ�Į�� �ﰢ��
	
	a[1][1] = 1;

	for (i = 2; i < 6; i++) {
		for (j = 1; j <= i; j++) { // �Ƕ�̵� ������� ����ؾ��ϹǷ� ���ǽ��� i����
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