#define _crt_no_secure_warnings
#include <stdio.h>
//#include <stdlib.h> //atoi, atof �Լ��� ����ϱ� ���� ����
#include <string.h>
int main()
{   
	char arr[100];
	double a, b, c;
	scanf("%lf %lf %lf", &a, &b, &c);
	sprintf(arr, "%.2lf%.2lf%.2lf", a, b, c); //�� ������ ������ ���ڿ�arr�� ����Ѵ�.
	int i, len = strlen(arr);                 //����Ѵٴ°� ����Ϳ� ����ϴ� ���� �ƴ϶�
	                                          //������ ���ڿ��� ����Ͽ� �����ϴ� �Լ��̴�.
	for (i = 0; i < len; i++) {               //���ڻӸ� �ƴ϶� ������ �Ǽ��� ���� �ڷ�����
		if (arr[i] == '.') {                  //�ϴ� ����� �Ǹ� ��� ���ڿ��� �����Ѵ�.
			printf("\n");
		}
		else printf("%c", arr[i]);
	}

	return 0;
}