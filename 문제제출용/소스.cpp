#define _crt_no_secure_warnings
#include <stdio.h>
int main()
{
	int score;
	while (1) {
		printf("점수를 입력하세요. ");
		scanf("%d", &score);
		if (score >= 80 && score <=100) {
			printf("축하합니다. 합격입니다.\n");
		}
		else if (score >= 0 && score < 80) {
			printf("죄송합니다. 불합격입니다.\n");
		}
		else {
			break;
		}
	}
	

	return 0;
}