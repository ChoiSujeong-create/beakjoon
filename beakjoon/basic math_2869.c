#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main(void) {
//	int v, a, b;
//	int m = 0;
//	int days = 0;
//	scanf("%d %d %d", &a, &b, &v);
//	while(1) {
//		m += a;	//낮에 올라가고
//		days++; //하루 카운트 (밤이 지나지 않아도 날짜 카운트하기 때문)
//		if (m >= v) break; // >= : 정상에 도착하면 v와 m의 숫자가 같음
//		m -= b; //밤에 미끄러지기 
//	}
//	printf("%d", days);
//}
int main(void) {
	int v, a, b;
	scanf("%d %d %d", &a, &b, &v);
	int days = (v - a) / (a - b);
	if ((v - a) % (a - b) != 0)
		days++;
}