#define _crt_no_secure_warnings
#include <stdio.h>
#include <string.h>
struct data
{
	int a, b;
}n[100];
int main()
{
	int i,cnt=0,j;
	//아래에서 파일 입출력 스트림을 생성하기 위해 파일포인터를 선언
	//포인터 변수의 이름은 곧 스트림의 이름이 된다.
	FILE* in = fopen("input.txt", "r"); //입력 파일스트림을 생성
	FILE* out = fopen("output.txt", "w"); //출력 파일 스트림을 생성
	//input.txt을 읽기 전용으로 오픈하고, in이라는 스트림을 이용해 연결
	//output.txt을 출력 전용으로 오픈하고, out이라는 스트림을 이용하여 연결	

	while (1) {
		if (fscanf(in, "%d %d", &n[cnt].a, &n[cnt].b) < 2) { //조건문처럼 보이지만 입력 받고 있는것임
			break;
		}
		cnt++;
	}

	for (j = 0; j < cnt; j++) {
		fprintf(out, "밑변 = %d, 높이 = %d, 넓이 = %.1lf\n", n[j].a, n[j].b, n[j].a * n[j].b / 2.0);
	}


	fclose(in); //함수가 종료될때 닫히지만 예기치 않게 중단될때를 대비해 작성해야함.
	fclose(out); //함수가 종료될때 닫히지만 예기치 않게 중단될때를 대비해 작성해야함.


	return 0;
}