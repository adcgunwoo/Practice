#define _crt_no_secure_warnings
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i,a[5];
	int* p = a;
	
	for (i = 0; i < 5; i++) {
		scanf("%d", p+i);
	}
	for (i = 0; i < 5; i+=2) {
		printf("%d ", *(p+i)); //포인터에서 배열을 표시하는 방식
	}
	/*
	for (i=0; i<5; i+=2){
		printf("%d ",a[i]); //일반적인 배열 출력
	}
	*/

	return 0;
}