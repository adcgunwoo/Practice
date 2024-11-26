#define _crt_no_secure_warnings
#include <stdio.h>
#include <ctype.h> // 문자type과 관련된 함수들이 정의되어있음.

int main()
{
	char a;
	while (1) {
		a = getchar(); //문자 하나를 입력받아서, ch 변수에 저장
		getchar(); // 위 식이 이뤄지면 입력받은 문자 + 엔터가 입력되는데, 엔터를 버려줌.
		if (isupper(a)) { //대문자인지 확인
			printf("대문자입니다.\n");
		}
		else if (islower(a)) { //소문자인지 확인
			printf("소문자입니다.\n");
		}
		else if (isdigit(a)) { //숫자문자인지 확인
			printf("숫자문자입니다.\n");
		}
		else {
			printf("영문, 숫자 이외의 문자입니다."); // isalpha() 알파벳인지 확인, isalnum()숫자 또는 알파벳인지 확인 
			break;
		}
	}

	return 0;
}
