#define _crt_no_secure_warnings
#include <stdio.h>
#include <string.h>
struct data
{
	char a[300];
}n,m[3];
void input(struct data &x)
{
	fgets(x.a, 300, stdin);
}
void sort(struct data &q,struct data w[])
{
	int i, wcnt = 0,wlen=0;
	int len = strlen(q.a);
	for (i = 0; i < len; i++) {
		if (q.a[i] == ' ') {
			w[wcnt].a[wlen] = '\0';
			wcnt += 1;
			wlen = 0;
		}
		else {
			w[wcnt].a[wlen] = q.a[i];
			wlen += 1;
		}
	}
	w[wcnt].a[wlen] = '\0';
}
void ouput(struct data w[])
{
	int i = 0;
	printf("name : %s\n", w[0].a);
	printf("tel : %s\n", w[1].a);
	printf("addr : %s\n", w[2].a);
}
int main()
{
	input(n);
	sort(n,m);
	ouput(m);
	return 0;
}