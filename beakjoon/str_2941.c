#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void) {
	char arr[100] = { '\0', };
	scanf("%s", arr);
	int size = strlen(arr); //문자열 길이
	for (int i = 0; i < 100; i++) {
		if (arr[i] == 'c' && arr[i + 1] == '=')
			size--;
		else if (arr[i] == 'c' && arr[i + 1] == '-')
			size--;
		else if (arr[i] == 'd' && arr[i + 1] == '-')
			size--;
		else if (arr[i] == 'd' && arr[i + 1] == 'z'&& arr[i+2]=='=')
			size--;
		else if (arr[i] == 'l' && arr[i + 1] == 'j')
			size--;
		else if (arr[i] == 'n' && arr[i + 1] == 'j')
			size--;
		else if (arr[i] == 's' && arr[i + 1] == '=')
			size--;
		else if (arr[i] == 'z' && arr[i + 1] == '=')
			size--;
	}
	printf("%d", size);
}