#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(int argc, char **argv)
{
	char buf[1000000];

	if (scanf("%s", buf) == EOF) {
		printf("scanf: EOF\n");
	}
	
	uint32_t longest_rep = 1;
	char curr_char = 'A';

	for (size_t buf_idx = 0, count = 0; buf[buf_idx] != '\0'; buf_idx++) {
		if (buf[buf_idx] == curr_char) {
			count++;
			longest_rep = (count > longest_rep) ? count : longest_rep;
		} else {
			curr_char = buf[buf_idx];
			count = 1;
		}
	}

	printf("%d", longest_rep);
}
