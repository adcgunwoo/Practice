#define _crt_no_secure_warnings
#include <stdio.h>
#include <string.h>
int main()
{   // b를 a에 합쳐야 하기에 a는 배열의 크기를 22만큼 선언
	char a[22], b[11], tmp[11]; 
	scanf("%s %s", a,b);

	strcpy(tmp, a);
	strcpy(a, b);
	strcpy(b, tmp);
	strcat(a, b);
						
	printf("%s", a);

	return 0;
}