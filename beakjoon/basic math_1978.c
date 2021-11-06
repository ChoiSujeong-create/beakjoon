#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int PrimeNumber(int n);
int main(void) {
	int t;
	int num[1000] = { 0, }; // 입력받은 수 저장
	int ans[1000] = { 0, }; // 함수 결과 저장
	int cnt = 0; // 소수의 갯수 카운트
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		scanf("%d", &num[i]);
		ans[i] = PrimeNumber(num[i]);
	}
	for (int i = 0; i < t; i++)
		if (ans[i] != 0) cnt++;
	printf("%d", cnt);
}
int PrimeNumber(int n) {
	if (n == 1) return 0;
	else if (n == 2) return 1;
	int last = n / 2;
	for (int i = 2; i < last; i++) {
		if ((last / i) == 0)
			return 0;
	}
	return 1;
}