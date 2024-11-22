#define _crt_no_secure_warnings
#include <stdio.h>
int cal(int x, char z, int y);
int main()
{
	int a, b;
	char c;
	scanf("%d %c %d", &a, &c, &b);
	printf("%d %c %d = %d", a,c,b,cal(a, c, b));
}
int cal(int x, char z, int y)
{
	if (z == '+') return x + y;
	else if (z == '-') return x - y;
	else if (z == '*') return x * y;
	else if (z == '/') return x / y;
	else return 0;
}
/* int gesan(int x, int y, char op)
{
    switch (op) {
    case '+':
        return x + y;
    case '-':
        return x - y;
    case '*':
        return x * y;
    case '/':
        return x / y;
    }
}

int main()
{
    {
        int a, b;
        char c;

        scanf("%d %c %d", &a, &c, &b);
        printf("%d %c %d = %d\n", a, c, b, gesan(a, b, c));

        return 0;
    }
}*/