#define _crt_no_secure_warnings
#include <stdio.h>

int main()
{
	int a = 5; // 디버깅에서 아직 입력 X (쓰레기값)
	a += 10; // 디버깅에서 a의 값 5
	a = a - 1; //디버깅에서 a의 값 15
	printf("%d\n", 15); 


	return 0;
}