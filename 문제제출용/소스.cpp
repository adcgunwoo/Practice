#define _crt_no_secure_warnings
#include <stdio.h>
#include <math.h>
#define gyesan(x,y) pow(x,y)
#define sangye(x,y) pow(x,y)
int main()
{
	int a,b,c,d;
	scanf("%d %d", &a, &b);
	c = gyesan(a - b, 2);
	d = sangye(a + b, 3);
	printf("(%d - %d) ^ %d = %d\n",a,b,2,c);
	printf("(%d + %d) ^ %d = %d\n", a, b, 3,d);
	
	return 0;
}