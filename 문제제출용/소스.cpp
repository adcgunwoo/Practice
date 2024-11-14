#define _crt_no_secure_warnings
#include <stdio.h>
int main()
{
	double a;
	scanf("%lf", &a);

	if (a > 88.45) {
		printf("Heavyweight");
	}
	else if (a>72.57 && a <= 88.45) {
		printf("Cruiserweight");
	}
	else if (a>61.23 && a <= 72.57) {
		printf("Middleweight");
	}
	else if (a>50.80 && a <= 61.23) {
		printf("Lightweight");
	}
	else if (a<=50.8) {
		printf("Flyweight");
	}
	
	return 0;
}