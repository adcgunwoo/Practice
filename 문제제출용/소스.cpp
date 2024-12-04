#define _crt_no_secure_warnings
#include <stdio.h>
#include <string.h>
int N;
struct data
{
	char name[20];
	int score, rank, cnt = 0;
}a[100], tmp;
void sort()
{
	int i, j;
	for (i = 0; i < N - 1; i++) { //성적 내림차순으로 정렬하기위해 선택정렬
		for (j = i + 1; j < N; j++) {
			if (a[i].score < a[j].score) {
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
	a[0].rank = 1; //내림차순으로 정렬된 가장 높은 점수를 1등으로 선언
	for (i = 1; i < N; i++) {
		if (a[i].score == a[i - 1].score) {
			a[i].rank = a[i - 1].rank;
		}
		else {
			a[i].rank = i + 1;
		}
	}
}
void output()
{
	int i, j;
	FILE* out = fopen("output.txt", "w"); //출력 파일 스트림을 생성

	fprintf(out, "  이름 점수 등수\n");

	for (i = 0; i < N; i++) {
		fprintf(out, "%s %4d %4d\n", a[i].name, a[i].score, a[i].rank);
	}

	fclose(out); //함수가 종료될때 닫히지만 예기치 않게 중단될때를 대비해 작성해야함.

}
int main()
{
	int i, j;
	//아래에서 파일 입출력 스트림을 생성하기 위해 파일포인터를 선언
	//포인터 변수의 이름은 곧 스트림의 이름이 된다.
	FILE* in = fopen("input.txt", "r"); //입력 파일스트림을 생성, 
	//input.txt을 읽기 전용으로 오픈하고, in이라는 스트림을 이용해 연결
	//output.txt을 출력 전용으로 오픈하고, out이라는 스트림을 이용하여 연결	
	for (N = 0; ; N++) {
		if (fscanf(in, "%s %d", a[N].name, &a[N].score) < 2) {//입력받은 자료의 개수를 반환하는데
			break;                                    //파일이 끝나면 2개 미만이 반환되므로 종료
		}
	}
	fclose(in); //함수가 종료될때 닫히지만 예기치 않게 중단될때를 대비해 작성해야함.
	sort();
	output();

	return 0;
}