#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int n = 0; 
	int room = 0; // ���� ���� = ����
	int tot = 0; //��ü ���ǰ���
	scanf("%d", &n);
	while (n > 1) { //�Է¹��� ������ ���� Ȯ�� 
		tot += ++room;
		if(n <= tot)break;
	}
	if (room % 2 != 0) //Ȧ������ �� 
		printf("%d/%d", 1 + (tot - n), room - (tot - n/*�� ������ ��� ���� ������ �Է¹��� ������ ����*/));
	else if (n == 0) printf("1/1"); //n=1�� �� 1/1 ���
	else //¦������ �� 
		printf("%d/%d", room - (tot - n), 1 + (tot - n));
}