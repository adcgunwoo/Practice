#define _crt_no_secure_warnings
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int* a = (int*)malloc(sizeof(int)); //�Ϲ������� �ڷḦ �����ϱ� ���� 
	int* b = (int*)malloc(sizeof(int)); //�޸� ������ Ȯ���Ϸ��� ������ �����ؾ���
	// sizeof() �ڷ����� byte���� ��ȯ, int�� 4, double�� 8,char 1�� ����
	scanf("%d %d", a, b);
	printf("%d + %d = %d", *a, *b, *a + *b);

	free(a); //5,6��° �ٿ� �Ҵ�� �޸� ����
	free(b); // malloc Ű����� ������ �����޸𸮴� �Լ��� ������ ������� ����
	//�׷��� ��� �޸𸮸� �����ϰ� �ǹǷ�, �Լ��� �������� �����Ű�� ���� �ٶ���
	return 0;
}