#define _crt_no_secure_warnings
#include <stdio.h>
void output(int &m, int &n);
void input(int x[], int y)
{
	printf("3������ ������ �Է��ϼ���. ");
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
		printf("�����մϴ�. �հ��Դϴ�.");
	}
	else {
		printf("�˼��մϴ�. ���հ��Դϴ�.");
	}
}
int main()
{
	int a[3];
	input(a, 3);
	sort(a, 3);
	return 0;
}