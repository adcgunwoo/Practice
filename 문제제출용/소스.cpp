#define _crt_no_secure_warnings
#include <stdio.h>
int main()
{
	int score;
	while (1) {
		printf("������ �Է��ϼ���. ");
		scanf("%d", &score);
		if (score >= 80 && score <=100) {
			printf("�����մϴ�. �հ��Դϴ�.\n");
		}
		else if (score >= 0 && score < 80) {
			printf("�˼��մϴ�. ���հ��Դϴ�.\n");
		}
		else {
			break;
		}
	}
	

	return 0;
}