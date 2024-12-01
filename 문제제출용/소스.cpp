#define _crt_no_secure_warnings
#include <stdio.h>
#include <string.h>
struct data
{
	int h;
	double w;
	char name[20];
}a[5],tmp;
void input(struct data n[], int m)
{
	int i;

	for (i = 0; i < m; i++) {
		scanf("%s %d %lf", n[i].name, &n[i].h, &n[i].w);
	}
}
void sort_n(struct data n[], int m)
{
	int i,j;
	for (i = 0; i < m-1; i++) {
		for (j = i + 1; j < m; j++) {
			if (strcmp(n[i].name,n[j].name)>0) { //n[i].name이 아스키코드값으로 더 크면..
				strcpy(tmp.name, n[i].name);
				strcpy(n[i].name, n[j].name);
				strcpy(n[j].name, tmp.name);
				tmp.h = n[i].h;
				n[i].h = n[j].h;
				n[j].h = tmp.h;
				tmp.w = n[i].w;
				n[i].w = n[j].w;
				n[j].w = tmp.w;
			}
		}
	}
}
void output_n(struct data n[], int m)
{
	int i = 0;
	printf("name\n");
	for (i = 0; i < m; i++) {
		printf("%s %d %.1lf\n", n[i].name,n[i].h, n[i].w);
	}
	printf("\n");
}
void sort_w(struct data n[], int m)
{
	int i, j;
	for (i = 0; i < m - 1; i++) {
		for (j = i + 1; j < m; j++) {
			if (n[i].w < n[j].w) {
				strcpy(tmp.name, n[i].name);
				strcpy(n[i].name, n[j].name);
				strcpy(n[j].name, tmp.name);
				tmp.h = n[i].h;
				n[i].h = n[j].h;
				n[j].h = tmp.h;
				tmp.w = n[i].w;
				n[i].w = n[j].w;
				n[j].w = tmp.w;
			}
		}
	}
}
void output_w(struct data n[], int m)
{
	int i;
	printf("weight\n");
	for (i = 0; i < m; i++) {
		printf("%s %d %.1lf\n", n[i].name, n[i].h, n[i].w);
	}
}
int main()
{
	input(a, 5);
	sort_n(a, 5);
	output_n(a, 5);
	sort_w(a, 5);
	output_w(a, 5);

	return 0;
}