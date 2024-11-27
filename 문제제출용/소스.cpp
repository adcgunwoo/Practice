#define _crt_no_secure_warnings
#include <stdio.h>
#include <string.h> //fgets 함수를 사용하기 위해 정의

int main()
{
	char a[50],tmp;
	int len,i,j;
	scanf("%s", a); //fgets는 공백이 있는 문자열을 하나로 받는것이지 그냥 문자열은 안됨.
	len = strlen(a);
	for (i = 0; i < len; i++) {
		tmp = a[0]; // a 배열의 값이 대입되면서 바뀔수있기에, 
		for (j = 0; j < len-1; j++) {
			a[j] = a[j+1];
		}
		a[len - 1] = tmp;
		printf("%s \n", a);
	}


	return 0;
}