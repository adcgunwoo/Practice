#define _crt_no_secure_warnings
#include <stdio.h>

int main()
{
	int a = 5; // ����뿡�� ���� �Է� X (�����Ⱚ)
	a += 10; // ����뿡�� a�� �� 5
	a = a - 1; //����뿡�� a�� �� 15
	printf("%d\n", 15); 


	return 0;
}