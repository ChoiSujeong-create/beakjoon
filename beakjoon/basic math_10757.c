#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int x[4] = { 0, };
	int y[4] = { 0, };
	int cnt = 0;
	int check=0;
	for (int i = 0; i < 3; i++)
	{
		scanf("%d %d", &x[i], &y[i]);
	}
	for (int i = 1; i <= 2; i++) {
		if (x[0] == x[i]) {   //x[0]�� ���� ���ڰ� ���� �ϸ�
			cnt++;			 //�ִٰ� ǥ��
		}
		else check = i;		//�ٸ� ���ڰ� ���� ��, �ٸ� ������ ��ġ ǥ��
	}
	if (cnt == 0 || cnt == 2) //x[0]�� �ϳ��ۿ� ���� �� or x[0]�� ���� ���ڰ� 2���� ��
		x[3] = x[0];
	else 
		x[3] = x[check];
	cnt = 0; check = 0; //�ʱ�ȭ
	for (int i = 1; i <= 2; i++) {
		if (y[0] == y[i]) {
			cnt++;
		}
		else check = i;
	}
	if (cnt == 0 || cnt == 2) //y[0]�� �ϳ��ۿ� ���� �� or y[0]�� ���� ���ڰ� 2���� �� 
		y[3] = y[0];
	else
		y[3] = y[check];
	printf("%d %d", x[3], y[3]);
}