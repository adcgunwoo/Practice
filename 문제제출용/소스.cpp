#define _crt_no_secure_warnings
#include <stdio.h>
#include <string.h>
struct data
{
	int score[3],sum;
}a[100];
int main()
{
	int n,i,j;
	//아래에서 파일 입출력 스트림을 생성하기 위해 파일포인터를 선언
	//포인터 변수의 이름은 곧 스트림의 이름이 된다.
	FILE* in = fopen("input.txt", "r"); //입력 파일스트림을 생성
	FILE* out = fopen("output.txt", "w"); //출력 파일 스트림을 생성
	//input.txt을 읽기 전용으로 오픈하고, in이라는 스트림을 이용해 연결
	//output.txt을 출력 전용으로 오픈하고, out이라는 스트림을 이용하여 연결	
	fscanf(in, "%d", &n);
	for (i = 0; i < n; i++) {
		for (j = 0; j < 3; j++) {
			fscanf(in, "%d", &a[i].score[j]);
			a[i].sum += a[i].score[j];
		}
	}
	for (i = 0; i < n - 1; i++) {
		for (j = i + 1; j < n; j++) {
			if (a[i].sum < a[j].sum) {
				int tmp = a[i].sum;
				a[i].sum = a[j].sum;
				a[j].sum = tmp;
			}
		}
	}
	for (i = 0; i < n; i++) {
		fprintf(out, "%.1lf\n", a[i].sum / 3.0);
	}
	fclose(in); //함수가 종료될때 닫히지만 예기치 않게 중단될때를 대비해 작성해야함.
	fclose(out); //함수가 종료될때 닫히지만 예기치 않게 중단될때를 대비해 작성해야함.
	return 0;
}