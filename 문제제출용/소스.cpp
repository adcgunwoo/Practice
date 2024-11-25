#define _crt_no_secure_warnings
#include <stdio.h>
void output(int x)
{
	if (x < 1) return;
	output(x - 1);
	printf("ȫ�浿\n");
}
int main()
{
	output(10);
	return 0;
}

