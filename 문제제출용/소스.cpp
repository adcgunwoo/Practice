#define _crt_no_secure_warnings
#include <stdio.h>
int main()
{
	int sum, kor, eng;
	double avg;
	char name[100];
    //아래에서 파일 입출력 스트림을 생성하기 위해 파일포인터를 선언
	FILE *in, *out;  //포인터 변수의 이름은 곧 스트림의 이름이 된다.
	in = fopen("input.txt", "r"); //입력 파일스트림을 생성, 
	//input.txt을 읽기 전용으로 오픈하고, in이라는 스트림을 이용해 연결
	out = fopen("output.txt", "w"); //출력 파일 스트림을 생성 
	//output.txt을 출력 전용으로 오픈하고, out이라는 스트림을 이용하여 연결
	
	fscanf(in, "%s %d %d", name, &kor, &eng);//in과 연결된 파일로부터 자료를 입력받음
	sum = kor + eng;
	avg = (kor + eng) / 2.0;

	printf("%s %d %.1lf\n", name, sum, avg);
	fprintf(out, "%s %d %.1lf\n", name, sum, avg); //입력과 방법이 같음,똑같이 출력
	
	fclose(in); //함수가 종료될때 닫히지만
	fclose(out); //예기치 않게 중단될때를 대비해 작성해야함.

	return 0;
}