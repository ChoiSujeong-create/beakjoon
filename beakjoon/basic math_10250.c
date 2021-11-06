#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int t; //test횟수
	int cnt = 1;  // 몇번째 고객인지 비교하기 위한 카운트 변수
	scanf("%d", &t);
	int h, w, n;
	int a=0, b=0; // 방 번호와 층수를 따로 저장할 변수
	for (int i = 0; i < t; i++) {
		scanf("%d %d %d", &h, &w, &n);
		for (int j = 1; j <= w; j++) { //방번호 
			for (int k = 1; k <= h; k++) {//층수
				b = k; //for문을 빠져나가면 k변수는 사용할 수 없으므로 층수를 따로 저장함
				if (cnt == n)
					break;
				cnt++;	
			}
			a = j; //cnt == 0 이 될때 for문을 빠져나가기 전에 방번호를 저장해둬야함 (순서 주의하기)
			if (cnt == n)
				break;
		}
		printf("%d%02d\n", b, a);
	}


}