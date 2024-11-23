#define _crt_no_secure_warnings
#include <stdio.h>
void output(int &m, int &n);
void input(int x[], int y)
{
	printf("3과목의 점수를 입력하세요. ");
	for (int i = 0; i < y; i++) {
		scanf("%d", &x[i]);
	}
}
void sort(int r[], int t)
{
	int sum = 0,fail=0;
	for (int i = 0; i < t; i++) {
		sum += r[i];
		if (r[i] < 40) {
			fail++;
		}
	}
	output(sum,fail);
}
void output(int &m,int &n)
{
	if (m > 180 && n == 0) {
		printf("축하합니다. 합격입니다.");
	}
	else {
		printf("죄송합니다. 불합격입니다.");
	}
}
int main()
{
	int a[3];
	input(a, 3);
	sort(a, 3);
	return 0;
}