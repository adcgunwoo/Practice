#define _crt_no_secure_warnings
#include <stdio.h>
void input(int& x, int& y)
{
	scanf("%d %d", &x, &y);
}
void sort(int& f, int& g)
{
	if (f > 12 || f < 1 || g < 1 || g>31) {
		printf("BAD!");
	}//1,3,5,7,8,10,12
	else if (f == 1 || f == 3 || f == 5 || f == 7 || f == 8 || f == 10 || f == 12) {
		if (g >= 1 && g <= 31) {
			printf("OK!");
		} 
		else printf("BAD");
	}
	else if (f == 2) {
		if (g > 29) {
			printf("BAD!");
		}
		else printf("OK!");
	}
	else if (f == 4 || f == 6 || f == 9 || f == 11) {
		if (g >= 1 && g <= 30) {
			printf("OK!");
		}
		else printf("BAD!");
	}
}
int main()
{
	int a, b;
	input(a, b);
	sort(a, b);

	return 0;
}