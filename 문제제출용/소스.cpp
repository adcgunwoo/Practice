#define _crt_no_secure_warnings
#include <stdio.h>
#include <string.h>
int main()
{
	char word[10][100],n,tmp[100];
	int i,j,len[10];
	//아래에서 파일 입출력 스트림을 생성하기 위해 파일포인터를 선언
	//포인터 변수의 이름은 곧 스트림의 이름이 된다.
	FILE* in = fopen("input.txt", "r"); //입력 파일스트림을 생성
	FILE* out = fopen("output.txt", "w"); //출력 파일 스트림을 생성
	//input.txt을 읽기 전용으로 오픈하고, in이라는 스트림을 이용해 연결
	//output.txt을 출력 전용으로 오픈하고, out이라는 스트림을 이용하여 연결	
	for (i = 0; i < 10; i++) {
		fscanf(in, "%s", word[i]);
		len[i] = strlen(word[i]);
	}
	fscanf(in, " %c", &n);
	for (i = 0; i < 9; i++) {
		for (j = i + 1; j < 10; j++) {
			if (strcmp(word[i], word[j]) > 0) {
				strcpy(tmp, word[i]);
				strcpy(word[i], word[j]);
				strcpy(word[j], tmp);
			}
		}
	}
	for (i = 0; i < 10; i++) {
		if (strchr(word[i], n)) {
			fprintf(out, "%s\n", word[i]);
		}
	}
	fclose(in); //함수가 종료될때 닫히지만 예기치 않게 중단될때를 대비해 작성해야함.
	fclose(out); //함수가 종료될때 닫히지만 예기치 않게 중단될때를 대비해 작성해야함.
	return 0;
}