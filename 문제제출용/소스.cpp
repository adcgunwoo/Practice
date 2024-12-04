#define _crt_no_secure_warnings
#include <stdio.h>
#include <string.h>
int main()
{
	int i, j;
	char a[101];
	//아래에서 파일 입출력 스트림을 생성하기 위해 파일포인터를 선언
	//포인터 변수의 이름은 곧 스트림의 이름이 된다.
	FILE* in = fopen("input.txt", "r"); //입력 파일스트림을 생성
	FILE* out = fopen("output.txt", "w"); //출력 파일 스트림을 생성
	//input.txt을 읽기 전용으로 오픈하고, in이라는 스트림을 이용해 연결
	//output.txt을 출력 전용으로 오픈하고, out이라는 스트림을 이용하여 연결	
	fgets(a, 101, in); //in 자리에 창에서 입력받으면 stdin이지만, 파일에서 입력을 받으므로
	                   //in이 그 자리에 들어간다.
	int len = strlen(a);
	while (a[len - 1] == '\r' || a[len - 1] == '\n') { 
		a[--len] = '\0'; //엔터등 행바꿈 문자가 있으면 널값으로 바꿔주고, 길이를 한개 줄여준다.
	}
	
	for (i = 0; i < len; i++) {
		if (a[i] == ' ') {
			fprintf(out, "\n");
		}
		else {
			fprintf(out, "%c", a[i]);
		}
	}
	
	fclose(in); //함수가 종료될때 닫히지만 예기치 않게 중단될때를 대비해 작성해야함.
	fclose(out); //함수가 종료될때 닫히지만 예기치 않게 중단될때를 대비해 작성해야함.
	

	return 0;
}