#define _crt_no_secure_warnings
#include <stdio.h>
void sort(int x)
{
	if (x < 1) return;
	sort(x-2);
	printf("%d ", x);

}
int main()
{
	int N;
	scanf("%d", &N);
	sort(N);
	return 0;
}
