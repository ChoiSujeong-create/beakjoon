#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main(void) {
//	int v, a, b;
//	int m = 0;
//	int days = 0;
//	scanf("%d %d %d", &a, &b, &v);
//	while(1) {
//		m += a;	//���� �ö󰡰�
//		days++; //�Ϸ� ī��Ʈ (���� ������ �ʾƵ� ��¥ ī��Ʈ�ϱ� ����)
//		if (m >= v) break; // >= : ���� �����ϸ� v�� m�� ���ڰ� ����
//		m -= b; //�㿡 �̲������� 
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