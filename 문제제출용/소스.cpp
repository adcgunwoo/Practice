#define _crt_no_secure_warnings
#include <stdio.h>
#include <ctype.h> // ����type�� ���õ� �Լ����� ���ǵǾ�����.

int main()
{
	char a;
	while (1) {
		a = getchar(); //���� �ϳ��� �Է¹޾Ƽ�, ch ������ ����
		getchar(); // �� ���� �̷����� �Է¹��� ���� + ���Ͱ� �ԷµǴµ�, ���͸� ������.
		if (isupper(a)) { //�빮������ Ȯ��
			printf("�빮���Դϴ�.\n");
		}
		else if (islower(a)) { //�ҹ������� Ȯ��
			printf("�ҹ����Դϴ�.\n");
		}
		else if (isdigit(a)) { //���ڹ������� Ȯ��
			printf("���ڹ����Դϴ�.\n");
		}
		else {
			printf("����, ���� �̿��� �����Դϴ�."); // isalpha() ���ĺ����� Ȯ��, isalnum()���� �Ǵ� ���ĺ����� Ȯ�� 
			break;
		}
	}

	return 0;
}
