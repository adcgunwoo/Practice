#define _crt_no_secure_warnings
#include <stdio.h>
int main()
{
	int a;
	int* p = &a;
	scanf("%d", &a); 
	printf("a = %d, *p = %d\n", a, *p);
	
	scanf("%d", p); // �����ʹ� &���� �Է� ����
	printf("a = %d, *p = %d\n", a, *p);
	*p = *p + 5; //��굵 ����
	printf("a = %d, *p = %d\n", a,*p);
	a = a + 15;
	printf("a = %d, *p = %d\n", a, *p);
	*p = *p - 1;
	printf("a = %d, *p = %d\n", a, *p);

	return 0;
}