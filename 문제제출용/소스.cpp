#define _crt_no_secure_warnings
#include <stdio.h>
int main()
{
	int a;
	char male;

	scanf("%c %d", &male, &a);
	if (male == 'M') {
		if (a >= 18) {
			printf("MAN");
		}
		else {
			printf("BOY");
		}
	}
	else {
		if(a>=18) {
			printf("WOMAN");
		}
		else {
			printf("GIRL");
		}
	}

	return 0;
}