#define _crt_secure_no_warnings
#include <stdio.h>

int main()
{
	int a;

	printf("당신의 나이는 몇 살입니까? ");
	scanf("%d", &a);
	printf("당신의 나이는 %d살이군요.", a);
	
	return 0;

}