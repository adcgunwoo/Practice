#define _crt_no_secure_warnings
#include <stdio.h>
int main()
{
	int a = 10;
	int* p=&a;

	printf("a = %d, &a = %p\n", a, &a); //%p는 주소를 16진수로 표시하는 서식문자다.
	printf("*p = %d, p = %p\n", *p, p); //만약 0xxxx의 형태로 출력하려면 %#p로 작성하자.
	//p에는 a의 주소가 저장되어 있으므로
	// *p를 출력하면 p에 저장된 주소가
	//가리기는 위치에 있는 값 즉,a가 출력된다.
	return 0;
}