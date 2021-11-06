#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int x, y, w, h;
	int n[4] = { 0, };
	scanf("%d %d %d %d", &x, &y, &w, &h);
	n[0] = h - y;
	n[1] = w - x;
	n[2] = x;
	n[3] = y;
	int min = n[0];
	for (int i = 0; i < 3; i++) {
		if (min > n[i + 1])
			min = n[i + 1];
	}
	printf("%d", min);
}