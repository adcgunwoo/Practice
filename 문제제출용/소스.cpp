#define _crt_no_secure_warnings
#include <stdio.h>
#include <string.h>
int main()
{
	int i,a[1000],cnt=0,cnt_=0;

	//아래에서 파일 입출력 스트림을 생성하기 위해 파일포인터를 선언
	//포인터 변수의 이름은 곧 스트림의 이름이 된다.
	FILE* in = fopen("input.txt", "r"); //입력 파일스트림을 생성
	FILE* out = fopen("output.txt", "w"); //출력 파일 스트림을 생성
	//input.txt을 읽기 전용으로 오픈하고, in이라는 스트림을 이용해 연결
	//output.txt을 출력 전용으로 오픈하고, out이라는 스트림을 이용하여 연결	
	
	for (i = 0; i < 1000; i++) {
		fscanf(in,"%d", &a[i]);
		if (a[i] == 0) {
			break;
		}
		cnt++;
	}
	for (i = 0; i < cnt; i++) {
		if (a[i] % 15 == 0) {
			fprintf(out, "%d ", a[i]);
			cnt_++;
		}
	}
	
	fprintf(out, "\n%d", cnt_);
	fclose(in); //함수가 종료될때 닫히지만 예기치 않게 중단될때를 대비해 작성해야함.
	fclose(out); //함수가 종료될때 닫히지만 예기치 않게 중단될때를 대비해 작성해야함.
	return 0;
}