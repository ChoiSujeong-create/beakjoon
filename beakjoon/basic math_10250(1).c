#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int t; //testȽ��
	int cnt = 1;  // ���° ������ ���ϱ� ���� ī��Ʈ ����
	scanf("%d", &t);
	int h, w, n;
	int a = 0, b = 0; // �� ��ȣ�� ������ ���� ������ ����
	for (int i = 0; i < t; i++) {
		scanf("%d %d %d", &h, &w, &n);
		a = (n % h); //���� ����
		b = (n / h);//���ȣ ����
		if (a == 0) {//����� ���� �� 
			a = h;
			printf("%d%02d\n", a, b);
		}
		else {
			printf("%d%02d\n", a, b+1);
		}
	}
}