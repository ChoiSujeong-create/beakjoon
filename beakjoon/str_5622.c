#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void) {
	char phnum[15] = {'\0',};
	int time[15] = { 0, };
	int result = 0;
	scanf("%s", phnum);
	for (int i = 0; i < 15; i++) {
		if (phnum[i] == 'A' | phnum[i] == 'B' | phnum[i] == 'C')
			time[i] = 3;
		else if(phnum[i] == 'D' | phnum[i] == 'E' | phnum[i] == 'F')
			time[i] = 4;
		else if (phnum[i] == 'G' | phnum[i] == 'H' | phnum[i] == 'I')
			time[i] = 5;
		else if (phnum[i] == 'J' | phnum[i] == 'K' | phnum[i] == 'L')
			time[i] = 6;
		else if (phnum[i] == 'M' | phnum[i] == 'N' | phnum[i] == 'O')
			time[i] = 7;
		else if (phnum[i] == 'P' | phnum[i] == 'Q' | phnum[i] == 'R' | phnum[i] == 'S')
			time[i] = 8;
		else if (phnum[i] == 'T' | phnum[i] == 'U' | phnum[i] == 'V')
			time[i] = 9;
		else if (phnum[i] == 'W' | phnum[i] == 'X' | phnum[i] == 'Y' | phnum[i] == 'Z')
			time[i] = 10;
	}
	for (int i = 0; i < 15; i++)
		result += time[i];
	printf("%d", result);
}