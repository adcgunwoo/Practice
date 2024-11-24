#define _crt_no_secure_warnings
#include <stdio.h>
#define swap(x,y) {int z=x; x=y; y=z;}
void sort(int x[], int y);
void input(int q[], int w);
void ouput(int m[], int n);
void input(int q[], int w)
{
	for (int i = 0; i < w; i++) {
		scanf("%d", &q[i]);
	}
}
void sort(int x[], int y)
{
	for (int i = 0; i < y - 1; i++) {
		for (int j = i + 1; j < y; j++) {
			if (x[i] > x[j]) {
				swap(x[i] , x[j]);
			}
		}
	}
}
void output(int m[], int n)
{
	for (int i = 0; i < n; i++) {
		printf("%d ", m[i]);
	}
}
int main()
{
	int a[5];
	input(a, 5);
	sort(a, 5);
	output(a, 5);
	return 0;
}