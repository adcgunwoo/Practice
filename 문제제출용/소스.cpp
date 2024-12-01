#define _crt_no_secure_warnings
#include <stdio.h>
#include <string.h>
struct data
{
	char name[15],tel[15],addr[15];
}arr[3];
void input(struct data x[])
{
	int i, j;
	for (i = 0; i < 3; i++) {
		scanf("%s %s %s", x[i].name, x[i].tel, x[i].addr);
	}
}
void sort(struct data y[])
{
	int i, j;
	char tmp[15];
	for (i = 0; i < 2; i++) {
		for (j = i + 1; j < 3; j++) {
			if (strcmp(y[i].name, y[j].name) > 0) {
				strcpy(tmp, y[i].name);
				strcpy(y[i].name, y[j].name);
				strcpy(y[j].name, tmp);
				strcpy(tmp, y[i].tel);
				strcpy(y[i].tel, y[j].tel);
				strcpy(y[j].tel, tmp);
				strcpy(tmp, y[i].addr);
				strcpy(y[i].addr, y[j].addr);
				strcpy(y[j].addr, tmp);
			}
		}
	}
}
void output(struct data z[])
{
	printf("name : ");
	printf("%s\n", z[0].name);
	printf("tel : ");
	printf("%s\n", z[0].tel);
	printf("addr : ");
	printf("%s\n", z[0].addr);
}
int main()
{
	input(arr);
	sort(arr);
	output(arr);

	return 0;
}