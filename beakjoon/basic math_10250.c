#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int t; //testȽ��
	int cnt = 1;  // ���° ������ ���ϱ� ���� ī��Ʈ ����
	scanf("%d", &t);
	int h, w, n;
	int a=0, b=0; // �� ��ȣ�� ������ ���� ������ ����
	for (int i = 0; i < t; i++) {
		scanf("%d %d %d", &h, &w, &n);
		for (int j = 1; j <= w; j++) { //���ȣ 
			for (int k = 1; k <= h; k++) {//����
				b = k; //for���� ���������� k������ ����� �� �����Ƿ� ������ ���� ������
				if (cnt == n)
					break;
				cnt++;	
			}
			a = j; //cnt == 0 �� �ɶ� for���� ���������� ���� ���ȣ�� �����ص־��� (���� �����ϱ�)
			if (cnt == n)
				break;
		}
		printf("%d%02d\n", b, a);
	}


}