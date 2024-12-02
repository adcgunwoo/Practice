#define _crt_no_secure_warnings
#include <stdio.h>
#include <math.h>
struct data
{
	double hei, wei;
}a,b,result;
void input(struct data &x, struct data &y)
{
	scanf("%lf %lf", &x.hei, &x.wei);
	scanf("%lf %lf", &y.hei, &y.wei);
}
struct data sort(struct data& q, struct data& w)
{
	result.hei = (q.hei + w.hei) / 2 + 5;
	result.wei = (q.wei + w.wei) / 2 - 4.5;
	return result;
}
void output(struct data& o)
{
	printf("height : %.0lfcm\n", floor(result.hei));
	printf("weight : %.1lfkg\n", result.wei);
}
int main()
{
	input(a, b);
	result=sort(a, b);
	output(result);

	return 0;
}