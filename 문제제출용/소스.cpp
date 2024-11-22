#define _crt_no_secure_warnings
#include <stdio.h>
double avg(int x, int y, int z);
int main()
{
	int i, j, a, b, c;
	printf("세과목의 점수를 입력하세요. ");
	scanf("%d %d %d", &a, &b, &c);
	printf("평균 : %.2lf", avg(a, b, c));
	
	return 0;
}

double avg(int x, int y, int z)
{
	return double(x + y + z) / 3;
}
