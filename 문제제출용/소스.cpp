#define _crt_no_secure_warnings
#include <stdio.h>
#include <time.h> // 시간 함수
int main()
{
	int a = 0;
	time_t now;
	struct tm tt;
	time(&now);
	tt = *localtime(&now);
	a = tt.tm_year; // 1
	a += tt.tm_mon; // 2
	a += tt.tm_mday;
	printf("%d %d %d\n", 0,124,147); // 3


	return 0;
}