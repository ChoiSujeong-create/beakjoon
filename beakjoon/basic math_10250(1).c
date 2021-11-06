#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int t; //test횟수
	int cnt = 1;  // 몇번째 고객인지 비교하기 위한 카운트 변수
	scanf("%d", &t);
	int h, w, n;
	int a = 0, b = 0; // 방 번호와 층수를 따로 저장할 변수
	for (int i = 0; i < t; i++) {
		scanf("%d %d %d", &h, &w, &n);
		a = (n % h); //층수 결정
		b = (n / h);//방번호 결정
		if (a == 0) {//꼭대기 층일 때 
			a = h;
			printf("%d%02d\n", a, b);
		}
		else {
			printf("%d%02d\n", a, b+1);
		}
	}
}