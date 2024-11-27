#define _crt_no_secure_warnings
#include <stdio.h>
#include <string.h>
int main()
{
	int i, j,len[21];
	char alpha, a[10][21] ={{0}};
	
	for (i = 0; i < 10; i++) {
		scanf( "%s", a[i]); //%s 앞에 공백 웬만하면 두자
		len[i] = strlen(a[i]);
	}
	scanf(" %c", &alpha); // %c 앞에 공백 둬야함!!
	
	for (i = 0; i < 10; i++) {
		if (a[i][len[i] - 1] == alpha) {
			printf("%s\n", a[i]);
		}
	}



	return 0;
}