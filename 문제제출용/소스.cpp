#define _crt_no_secure_warnings
#include <stdio.h>
int main()
{
	int a, b;
	double area;
	char trial;

	while (1) {
		printf("Base = ");
		scanf("%d", &a);
		printf("Height = ");
		scanf("%d", &b);
		area = a * b / 2.0;
		printf("Triangle width = %.1lf\n", area);
		printf("Continue? ");
		scanf(" %c", &trial);
		if (trial != 'Y' && trial != 'y') {
			break;
		}
	}

	return 0;
}