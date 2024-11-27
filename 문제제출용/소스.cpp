#define _crt_no_secure_warnings
#include <stdio.h>
#include <string.h> //fgets 함수를 사용하기 위해 정의

int main()
{
	char a[100],tmp,pmt;
	int len, i, j;
	scanf("%s", a);
	len = strlen(a);

	for (i = 0; i < len; i++) {
		tmp = a[len - 1];
		for (j=len-1; j>=0; j--){ // for (j=0; j<len-1; j++) { 왼쪽으로 돌렸을때와 차이
			a[j] = a[j-1];	//            a[j] = a[j+1];         
		}
		a[0] = tmp;
		printf("%s \n",a);
	}

	return 0;
}