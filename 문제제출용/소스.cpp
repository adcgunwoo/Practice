#define _crt_no_secure_warnings
#include <stdio.h>
#include <string.h>
int main()
{   
	int i,j,a,len,cnt=0,wcnt=0;
	double b;
	char arr[100],c[30],half[2][50];

	scanf("%d %lf %s",&a, &b, c);
	sprintf(arr, "%d%.3lf%s", a, b, c); //arr에 세 자료형을 합침
	len = strlen(arr);

	if (len % 2 == 0) { //길이가 짝수일 때
		for (i = 0; i < len; i++) {
			if (i == len / 2) { //절반에 도착했을때
				printf("\n"); //엔터, 줄바꾸기
				half[cnt][wcnt] = '\0'; //마지막에 널값을 넣어주며, 쓰레기값이 같이 나오는거 차단
				cnt++; // 두번째 단어를 출력하기위한 증가
				wcnt = 0; //다음 값을 입력하기 위해 0으로 초기화
			}
			half[cnt][wcnt++] = arr[i]; //입력받기
		}
	}
	else { //길이가 홀수일때
		for (i = 0; i < len; i++) {
			if (i == (len / 2) + 1) {
				printf("\n");
				half[cnt][wcnt] = '\0'; //널값 넣어주기, 이걸 실행하지 않으면,뒤에 쓰레기값도 같이 나옴
				cnt++; // 행 바꿔주기   
				wcnt = 0; //초기화
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