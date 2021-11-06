#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void) {
	char str[1000000] = " ";
	int cnt=0, len =0 ;
	// scanf("%s", str);  - 공백 포함한 문자열을 입력받지 못함
	gets(str);
	len = strlen(str);
	for (int i = 0; i < len; i++)
		if (str[i] == ' ')
			cnt++;
	if (str[0] == ' ')       //첫번째 공백일때
		cnt--;
	if (str[len-1] == ' ')   //마지막 공백일때
		cnt--;
	printf("%d", cnt + 1);
}