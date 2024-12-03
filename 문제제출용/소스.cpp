#define _crt_no_secure_warnings
#include <stdio.h>
int main()
{
	int n,i,max,min;
	int* p = &n;
	scanf("%d", p);
	int *q = new int[n];

	for (i = 0; i < *p; i++) {
		scanf("%d", q + i);	
	}
	max = *q;
	min = *q;
	for (i = 0; i < *p; i++) {
		if (max < *(q + i)) {
			max = *(q + i);
		}
		else if (min > *(q + i)) {
			min = *(q + i);
		}
	}
	printf("max : %d\n", max);
	printf("min : %d\n", min);

	delete []q;

	return 0;
}