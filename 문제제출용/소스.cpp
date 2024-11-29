#define _crt_no_secure_warnings
#include <stdio.h>
#include <string.h>
int main()
{   
	char a[50][101],alpha='0';
	int cnt = 0,wcnt=0,i;
	for (i = 0; i < 50; i++) {
		scanf("%s", a[i]);
		wcnt++;
		if (strchr(a[i],alpha)) { // if (a[i][0]==alpha) 의 조건문으로도 작성할 수 있다.
			break;
		}
		cnt++;
	}
	printf("%d\n", cnt);
	for (i = 0; i < cnt; i+=2) {
		printf("%s\n", a[i]);
	}

	return 0;
}