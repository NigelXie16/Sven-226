#include <stdio.h>

int main() {
	char ch;
	int list[128] = {0};

	while ((ch = getchar()) != EOF) {
		if (ch >= 'A' && ch <= 'Z') {
			list[(int)ch + 32]++;
		}
		else if (ch >= 'a' && ch <= 'z') {
			list[(int)ch]++;
		}
	}

	int index;
	for (index = 97; index <= 122; index++) {
		printf("%c\t%i\n", index, list[index]);
	}
	return 0;
}
