#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void) {
	char str[1000000] = " ";
	int cnt=0, len =0 ;
	// scanf("%s", str);  - ���� ������ ���ڿ��� �Է¹��� ����
	gets(str);
	len = strlen(str);
	for (int i = 0; i < len; i++)
		if (str[i] == ' ')
			cnt++;
	if (str[0] == ' ')       //ù��° �����϶�
		cnt--;
	if (str[len-1] == ' ')   //������ �����϶�
		cnt--;
	printf("%d", cnt + 1);
}