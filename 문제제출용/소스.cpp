#define _crt_no_secure_warnings
#include <stdio.h>
#include <string.h>
struct data
{
	int height;
	char name[20];
}a[5],small;
struct data cal(struct data arr[], int n)
{
	int i;
	small.height = a[0].height;
	strcpy(small.name, a[0].name);
	for (i = 0; i < n; i++) {
		if (small.height > a[i].height) {
			small.height = a[i].height;
			strcpy(small.name, a[i].name);
		}
	}
	return small;
}
int main()
{
	int i;
	for (i = 0; i < 5; i++) {
		scanf("%s %d", a[i].name, &a[i].height);
	}
	small = cal(a, 5);
	printf("%s %d", small.name, small.height);

	return 0;
}