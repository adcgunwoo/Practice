#define _crt_no_secure_warnings
#include <stdio.h>
#include <stdlib.h> //atoi, atof 함수를 사용하기 위해 정의
int main()
{   
	char a[20];
	scanf("%s", a);

	printf("%d\n", atoi(a)*2);
	printf("%.2lf\n", atof(a));

	return 0;
}