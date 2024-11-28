#define _crt_no_secure_warnings
#include <stdio.h>
#include <string.h>
int main()
{   
	char a[20], b[20];
	scanf("%s %s", a, b);

	if (strcmp(a, b)==0) {
		printf("두 문자열은 같습니다.\n");
	}
	else if (strcmp(a, b)>0) {
		printf("%s 가(이) 더 큽니다.\n", a);
	}
	else {
		printf("%s 가(이) 더 큽니다.\n", b);
	}

	if (strncmp(a, b, 3)==0) {
		printf("앞의 세 문자가 같습니다.");
	}
	else {
		printf("앞의 세 문자가 같지 않습니다.");
	}
	return 0;
}