#define _crt_no_secure_warnings
#include <stdio.h>
void input(int x[],int &y)
{
	scanf("%d", &y);
	for (int i = 0; i < y; i++) {
		scanf("%d", &x[i]);
	}
}
void swap(int x[],int &y)
{
	for (int i = 0; i < y - 1; i++) {
		for (int j = i + 1; j < y; j++) {
			if (x[i] < x[j]) {
				int tmp = x[i];
				x[i] = x[j];
				x[j] = tmp;
			}
		}
	}
}
void output(int d[],int &e)
{
	for (int i = 0; i < e; i++) {
		printf("%d ", d[i]);
	}
}
int main()
{
	int a[10],n;
	input(a, n);
	swap(a, n);
	output(a, n);

	return 0;
}