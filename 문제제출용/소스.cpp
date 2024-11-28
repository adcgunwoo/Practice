#define _crt_no_secure_warnings
#include <stdio.h>
#include <string.h>
int main()
{   
	char a[5][20],tmp[20];
	int i,j;
	printf("단어 5개를 입력하세요.\n");
	for (i = 0; i < 5; i++) {
		scanf("%s", a[i]);
	}
	for (i = 0; i < 4; i++) {
		for (j = i + 1; j < 5; j++) {
			if (strcmp(a[i], a[j]) > 0) {
				strcpy(tmp, a[i]);
				strcpy(a[i], a[j]);
				strcpy(a[j], tmp);
			}
		}
	}

	for (i = 0; i < 5; i++) {
		printf("%s\n", a[i]);
	}

	return 0;
}