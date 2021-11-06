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
		if (x[0] == x[i]) {   //x[0]과 같은 숫자가 존재 하면
			cnt++;			 //있다고 표시
		}
		else check = i;		//다른 숫자가 있을 때, 다른 숫자의 위치 표시
	}
	if (cnt == 0 || cnt == 2) //x[0]이 하나밖에 없을 때 or x[0]과 같은 숫자가 2개일 때
		x[3] = x[0];
	else 
		x[3] = x[check];
	cnt = 0; check = 0; //초기화
	for (int i = 1; i <= 2; i++) {
		if (y[0] == y[i]) {
			cnt++;
		}
		else check = i;
	}
	if (cnt == 0 || cnt == 2) //y[0]이 하나밖에 없을 때 or y[0]과 같은 숫자가 2개일 때 
		y[3] = y[0];
	else
		y[3] = y[check];
	printf("%d %d", x[3], y[3]);
}