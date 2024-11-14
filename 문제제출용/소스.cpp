#define _crt_no_secure_warnings
#include <stdio.h>
int main()
{
	int a, b;
	int max_data;
	scanf("%d %d", &a, &b);

	max_data = (a > b) ? a : b;
	
	return 0;
}