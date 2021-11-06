#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void) {
	int n = 0;  // 단어의 갯수
	int cnt = 0; // 그룹단어 카운트 
	char arr[100] = {'\0',};
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%s", arr);
		int size = strlen(arr); //문자열 길이
		int check = 0; // 떨어져서 쓰여진 알파벳이 있는지 확인
		int count[26] = { 0, };
		count[arr[0] - 97] = 1; //첫번째 문자에 해당하는 인덱스에 1을 표시
		for (int j = 0; j < size; j++) {
			if (arr[j] != arr[j + 1])
				count[arr[j + 1] - 97] += 1;
		}
		for (int i = 0; i < 26; i++) { // count배열에 2이상 숫자가 있는지 확인
			if (count[i] > 1)
				check += 1; // 떨어져서 쓰여진 알파벳이 있는지 체크
		}
		if (check == 0)	cnt++;
	}
	printf("%d", cnt);
}