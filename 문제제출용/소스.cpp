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
			printf("잘못 입력하였습니다.\n");
		}
		else if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
			if (month == 2) {
				printf("입력하신 달의 날 수는 29일입니다.\n");
			}
			else {
				printf("입력하신 달의 날 수는 %d일입니다.\n", days[month]);
			}
		}
	
		else {
			printf("입력하신 달의 날 수는 %d일입니다.\n", days[month]);
		}
		printf("\n");
	}

	return 0;
}