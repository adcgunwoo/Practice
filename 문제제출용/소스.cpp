#define _crt_no_secure_warnings
#include <stdio.h>
void line(int num); //������Ÿ��(�Լ�����)����
int main()
{
	int a;
	scanf("%d", &a);
	line(a); //a�� �μ��� �����Ͽ� line�Լ��� ȣ��

	return 0;
}
void line(int num) //�Ű������� �޾Ƽ� num�� ����
{
	printf("10ū�� : %d\n", num + 10);
	printf("10������ : %d\n", num - 10);
}

