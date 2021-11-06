#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void) {
	int fixnum=0;
	int varinum=0;
	int price = 0;
	//int breakeven = 1;
	scanf("%d %d %d", &fixnum, &varinum, &price);
	if (varinum >= price) printf("-1");
	else printf("%d", fixnum / (price - varinum) + 1);
	
	
	
	//while (1) {
	//	if (varinum >= price){
	//		printf("-1"); break;
	//} //손익분기점이 존재하지 않을 때 (가격이 가변비용보다 작을 때)	
	//	else if (price * breakeven > fixnum + (varinum * breakeven)) // 손익분기점 확인후 루프 탈출
	//	{	printf("%d", breakeven);
	//		break;
	//	}else	breakeven++;	// 손익분기점이 되는 판매량 체크하기 위함 +1
	//}
}