#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void) {
	int n = 0;  // �ܾ��� ����
	int cnt = 0; // �׷�ܾ� ī��Ʈ 
	char arr[100] = {'\0',};
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%s", arr);
		int size = strlen(arr); //���ڿ� ����
		int check = 0; // �������� ������ ���ĺ��� �ִ��� Ȯ��
		int count[26] = { 0, };
		count[arr[0] - 97] = 1; //ù��° ���ڿ� �ش��ϴ� �ε����� 1�� ǥ��
		for (int j = 0; j < size; j++) {
			if (arr[j] != arr[j + 1])
				count[arr[j + 1] - 97] += 1;
		}
		for (int i = 0; i < 26; i++) { // count�迭�� 2�̻� ���ڰ� �ִ��� Ȯ��
			if (count[i] > 1)
				check += 1; // �������� ������ ���ĺ��� �ִ��� üũ
		}
		if (check == 0)	cnt++;
	}
	printf("%d", cnt);
}