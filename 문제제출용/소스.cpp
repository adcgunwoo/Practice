#define _crt_no_secure_warnings
#include <stdio.h>
int main()
{
	int i, j,year,month;
	int days[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 }; 

	while (1) {
		printf("YEAR = ");
		scanf("%d", &year);
		printf("MONTH = ");
		scanf("%d", &month);
		if (month == 0) {
			break;
		}
		else if (month > 12 || month < 1) {
			printf("�߸� �Է��Ͽ����ϴ�.\n");
		}
		else if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
			if (month == 2) {
				printf("�Է��Ͻ� ���� �� ���� 29���Դϴ�.\n");
			}
			else {
				printf("�Է��Ͻ� ���� �� ���� %d���Դϴ�.\n", days[month]);
			}
		}
	
		else {
			printf("�Է��Ͻ� ���� �� ���� %d���Դϴ�.\n", days[month]);
		}
		printf("\n");
	}

	return 0;
}