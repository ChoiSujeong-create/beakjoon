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
	//} //���ͺб����� �������� ���� �� (������ ������뺸�� ���� ��)	
	//	else if (price * breakeven > fixnum + (varinum * breakeven)) // ���ͺб��� Ȯ���� ���� Ż��
	//	{	printf("%d", breakeven);
	//		break;
	//	}else	breakeven++;	// ���ͺб����� �Ǵ� �Ǹŷ� üũ�ϱ� ���� +1
	//}
}