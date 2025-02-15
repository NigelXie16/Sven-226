// Nigel Xie
//nx1027
//02/12/2025
#include <stdio.h>

/*
 * This program counts the frequency of each letter in the input.
 */
int main() {
	char ch; // character to be read or is being read
	int list[128] = {0}; // array to store the frequency of each letter
	// Using ASCII values as the index of the array

	while ((ch = getchar()) != EOF) { // read characters until EOF, end of file
		if (ch >= 'A' && ch <= 'Z') { // if the character is uppercase
			list[(int)ch + 32]++; // convert to lowercase and increment frequency
		}
		else if (ch >= 'a' && ch <= 'z') { // if the character is lowercase
			list[(int)ch]++; // increment frequency
		}
	}

	int index;
	for (index = 97; index <= 122; index++) { // loop through the lowercase letters
		printf("%c\t%i\n", index, list[index]); // print the letter and its frequency
	}
	return 0;
}
