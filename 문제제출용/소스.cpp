#define _crt_no_secure_warnings
#include <stdio.h>
int main()
{
	int a = 10;
	int* p=&a;

	printf("a = %d, &a = %p\n", a, &a); //%p�� �ּҸ� 16������ ǥ���ϴ� ���Ĺ��ڴ�.
	printf("*p = %d, p = %p\n", *p, p); //���� 0xxxx�� ���·� ����Ϸ��� %#p�� �ۼ�����.
	//p���� a�� �ּҰ� ����Ǿ� �����Ƿ�
	// *p�� ����ϸ� p�� ����� �ּҰ�
	//������� ��ġ�� �ִ� �� ��,a�� ��µȴ�.
	return 0;
}