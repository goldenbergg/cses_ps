#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(int argc, char **argv)
{
	char buf[1000000];

	if (scanf("%s", buf) == EOF) {
		printf("scanf: EOF\n");
	}
	
	char c = 'A';
	int64_t cnt = 0, max_rep = 0;

	for (size_t i = 0; buf[i] != '\0'; i++) {
		if (buf[i] == c) {
			cnt++;
		} else {
			max_rep = (cnt > max_rep) ? cnt : max_rep;
			c = buf[i];
			cnt = 1;
		}
	}

	printf("%ld", (cnt > max_rep) ? cnt : max_rep);

	return 0;	
}
