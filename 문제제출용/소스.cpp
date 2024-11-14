#define _crt_no_secure_warnings
#include <stdio.h>
int main()
{
	char alpha = 'A';
	while (alpha <= 'Z') {
		printf("%c", alpha++);
	}

	return 0;
}