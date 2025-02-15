#include <stdio.h>
#include <ctype.h>

int main() {
	int ch;
	int counts[26] = {0};

	while ((ch = getchar()) != EOF) {
		ch = tolower(ch);
		if (isalpha(ch)) {
			counts[ch - 'a']++;
		}
	}

	for (int i = 0; i < 26; i++) {
		printf("%c\t%d\n", 'a' + i, counts[i]);
	}
	return 0;
}
