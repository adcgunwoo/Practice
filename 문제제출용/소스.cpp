#define _crt_no_secure_warnings
#include <stdio.h>
#include <string.h>
struct data
{
	int height;
	double weight;
	char name[20]; //이름이 3글자이기에 name[4]정도로 했지만, 런타임에러가 떴음
}a[5],tmp;
void input(struct data n[], int x)
{
	int i;
	for (i = 0; i < x; i++) {
		scanf("%s %d %lf", n[i].name, &n[i].height, &n[i].weight);
	}
}
void sort(struct data n[], int x)
{
	int i,j;
	for (i = 0; i < x - 1; i++) {
		for (j = i + 1; j < x; j++) {
			if (n[i].height > n[j].height) {
				strcpy(tmp.name, n[i].name);
				strcpy(n[i].name, n[j].name);
				strcpy(n[j].name, tmp.name);
				tmp.height = n[i].height;
				n[i].height = n[j].height;
				n[j].height = tmp.height;
				tmp.weight = n[i].weight;
				n[i].weight = n[j].weight;
				n[j].weight = tmp.weight;
			}
		}
	}
}
void output(struct data n[], int x)
{
	int i;
	for (i = 0; i < x; i++) {
		printf("%s %d %.1lf\n", n[i].name, n[i].height, n[i].weight);
	}
}
int main()
{
	input(a, 5);
	sort(a, 5);
	output(a, 5);
	return 0;
}