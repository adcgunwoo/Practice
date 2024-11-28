#define _crt_no_secure_warnings
#include <stdio.h>
#include <string.h>
int main()
{   
	char a[20], b[20], c[40];
	scanf("%s %s", a, b);
	strcpy(c, a);
	printf("%s\n",strncpy(c, b, 3));
	printf("%s\n",strncat(b, a, 3));


	return 0;
}