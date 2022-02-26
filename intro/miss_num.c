#include <stdio.h>
#include <stdint.h>

int main(int argc, char **argv)
{
	char t;
	int64_t n;

	if (scanf("%ld", &n) == EOF) {
		printf("scanf: EOF\n");
	}
	
	if (scanf("%c", &t) == EOF) {
		printf("scanf: EOF\n");
	}
	
	int64_t s = 0;

	for (int64_t i = 1, j = 0; i < n; i++, s += j) {
		if (scanf("%ld", &j) == EOF) {
			printf("scanf: EOF\n");
		}
	}

	printf("%ld", n * (n + 1) / 2 - s);

	return 0;
}
