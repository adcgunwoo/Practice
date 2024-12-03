#define _crt_no_secure_warnings
#include <stdio.h>
int main()
{
	int a[10],i;
    //아래에서 파일 입출력 스트림을 생성하기 위해 파일포인터를 선언
	FILE *in, *out;  //포인터 변수의 이름은 곧 스트림의 이름이 된다.
	in = fopen("./temp/input.txt", "r"); //입력 파일스트림을 생성, 
	//input.txt을 읽기 전용으로 오픈하고, in이라는 스트림을 이용해 연결
	out = fopen("./temp/output.txt", "w"); //출력 파일 스트림을 생성 
	//output.txt을 출력 전용으로 오픈하고, out이라는 스트림을 이용하여 연결
	
	
	for (i = 0; i < 10; i++) {
		fscanf(in, "%d", &a[i]);//in과 연결된 파일로부터 자료를 입력받음
	}

	for (i = 1; i < 10; i+=2) {
		printf("%d ", a[i]);
	}
	for (i = 1; i < 10; i+=2) { //입력과 방법이 같음,똑같이 출력
		fprintf(out, "%d ", a[i]);
	}
	fclose(in); //함수가 종료될때 닫히지만
	fclose(out); //예기치 않게 중단될때를 대비해 작성해야함.

	return 0;
}