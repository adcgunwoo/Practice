#define _crt_no_secure_warnings
#include <stdio.h>
void output(int x[4][4])
{
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%d ", x[i][j]);
		}
		printf("\n");
	}
}
void input()
{
	int a[4][4]={{0}};
	for(int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			scanf("%d", &a[i][j]);
			a[i][3] += a[i][j];
			a[3][j] += a[i][j];
			a[3][3] += a[i][j];
		}
	}
	output(a);
}
int main()
{
	input();
	return 0;
}