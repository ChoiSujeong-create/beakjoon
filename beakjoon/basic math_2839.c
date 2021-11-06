#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int n;
	int a = 0, b = 0;
	scanf("%d",&n);
	if (n % 5 == 0)
		printf("%d", n/5);
	else {
		do {
			n -= 3;
			if (n < 0) {
				printf("-1");
				return 0;
			}
			a++;
			if (n % 5 == 0) {
				b = (n / 5);
				break;
			}
		} while (n > 0);
		printf("%d", a + b);
	}
}