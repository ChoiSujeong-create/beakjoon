#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void) {
	int s1[3] = { 0, };
	int s2[3] = { 0, };
	scanf("%1d%1d%1d", &s1[0], &s1[1], &s1[2]);
	scanf("%1d%1d%1d", &s2[0], &s2[1], s2[2]);
	int n1 = s1[2] * 100 + s1[1] * 10 + s1[0];
	int n2 = s2[2] * 100 + s2[1] * 10 + s2[0];
	if (n1 > n2)
		printf("%d", n1);
	else
		printf("%d", n2);
}