#define _crt_no_sesure_warnings
#include <stdio.h>

int main()
{
	int i=0;
	char a[6] = { 'J','U','N','G','O','L'},alpha;
	scanf(" %c", &alpha);
	
	for (i = 0; i < 6; i++) {
		if (alpha == a[i]) {
			printf("%d", i);
			break;
		}
	}
	if (i > 5) {
		printf("none");
	}

	return 0;
}