#include <stdio.sh>

int main() {
	char ch;
	int list arr[122];

	while ((ch = getchar() != EOF) {
		if (ch >= 'A' && ch <= 'Z') {
			arr[int(ch)+32]++;
		}
		else if (ch >='a' && ch <= 'z') {
			arr[int(ch)]++;
		}
	}

	while (int index = 97; index <= 122 ) {
		printf("%c\t%i", index, index);
	}
	return 0;
}
