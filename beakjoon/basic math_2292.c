#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main(void) {
//	int n = 0, cnt =1 ;
//	scanf("%d", &n);
//	
//	while (n>1) {
//        n -= 6 * cnt;
//		cnt++;
//	}
//    printf("%d", cnt);
//}
int main(void) {
	int n;
	int room =1 ; // �� ����
	int tot = 1;  //��ü �� ����
	int cnt = 1; // ��

	scanf("%d", &n);
	while (1) {
		if (n <= tot)
			break;
		room = 6 * cnt;
		cnt++; 
		tot += room;
	}
	printf("%d", cnt);
}
