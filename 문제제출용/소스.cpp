#define _crt_no_secure_warnings
#include <stdio.h>

int main()
{
	int sum=0,i, j, width[4] = { 0 }, height[2] = { 0 }, a[4][2];


	for (i = 0; i < 4; i++) {
		for (j = 0; j < 2; j++) {
			scanf("%d", &a[i][j]);
			width[i] += a[i][j];
			height[j] += a[i][j];
			sum+=a[i][j];
		}
	}

	for (i = 0; i < 4; i++) {
		printf("%d ", width[i]/2);
	}
	printf("\n");

	for (i = 0; i < 2; i++) {
		printf("%d ", height[i]/4);
	}
	printf("\n");
	printf("%d", sum / 8);

	return 0;
}