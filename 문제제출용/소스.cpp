#define _crt_no_secure_warnings
#include <stdio.h>
void line(int num); //프로토타입(함수원형)선언
int main()
{
	int a;
	scanf("%d", &a);
	line(a); //a를 인수로 전달하여 line함수를 호출

	return 0;
}
void line(int num) //매개변수로 받아서 num에 저장
{
	printf("10큰수 : %d\n", num + 10);
	printf("10작은수 : %d\n", num - 10);
}

