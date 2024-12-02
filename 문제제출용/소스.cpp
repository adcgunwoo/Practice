#define _crt_no_secure_warnings
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int N,i;
	int* p;
	/*scanf("%d",&N);
	*int a[N];    이 주석처리된 문장들은 a의 개수를 알수가 없으므로,실행시 에러가 뜸
	*/ 
	scanf("%d", &N);
	p = new int[N];
	for (i = 0; i < N; i++) {
		scanf("%d", p + i);
	}
	for (i = N - 1; i >= 0; i--) {
		printf("%d ", *(p + i));
	}
	delete []p; //동적배열을 선언했기에 지워줘야함
	return 0;   //[]이 포인터 변수 앞에 선언해야함
}