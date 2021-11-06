#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int n = 0; 
	int room = 0; // 방의 갯수 = 층수
	int tot = 0; //전체 방의갯수
	scanf("%d", &n);
	while (n > 1) { //입력받은 숫자의 층수 확인 
		tot += ++room;
		if(n <= tot)break;
	}
	if (room % 2 != 0) //홀수층일 때 
		printf("%d/%d", 1 + (tot - n), room - (tot - n/*그 층까지 모든 방의 갯수와 입력받은 숫자의 차이*/));
	else if (n == 0) printf("1/1"); //n=1일 때 1/1 출력
	else //짝수층일 때 
		printf("%d/%d", room - (tot - n), 1 + (tot - n));
}