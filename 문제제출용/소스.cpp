#define _crt_no_secure_warnings
#include <stdio.h>
#include <string.h>
int main()
{   
	int i,j,a,len,cnt=0,wcnt=0;
	double b;
	char arr[100],c[30],half[2][50];

	scanf("%d %lf %s",&a, &b, c);
	sprintf(arr, "%d%.3lf%s", a, b, c); //arr�� �� �ڷ����� ��ħ
	len = strlen(arr);

	if (len % 2 == 0) { //���̰� ¦���� ��
		for (i = 0; i < len; i++) {
			if (i == len / 2) { //���ݿ� ����������
				printf("\n"); //����, �ٹٲٱ�
				half[cnt][wcnt] = '\0'; //�������� �ΰ��� �־��ָ�, �����Ⱚ�� ���� �����°� ����
				cnt++; // �ι�° �ܾ ����ϱ����� ����
				wcnt = 0; //���� ���� �Է��ϱ� ���� 0���� �ʱ�ȭ
			}
			half[cnt][wcnt++] = arr[i]; //�Է¹ޱ�
		}
	}
	else { //���̰� Ȧ���϶�
		for (i = 0; i < len; i++) {
			if (i == (len / 2) + 1) {
				printf("\n");
				half[cnt][wcnt] = '\0'; //�ΰ� �־��ֱ�, �̰� �������� ������,�ڿ� �����Ⱚ�� ���� ����
				cnt++; // �� �ٲ��ֱ�   
				wcnt = 0; //�ʱ�ȭ
			}
			half[cnt][wcnt++] = arr[i];
		}
	}
	half[cnt][wcnt] = '\0'; 
	cnt++;

	for (i = 0; i < cnt; i++) {
		printf("%s\n", half[i]);
	}

	return 0;
}