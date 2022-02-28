#include <stdio.h>
#include <stdint.h>

int 
main(int argc, char **argv)
{
	int64_t n;
	
	if (scanf("%ld", &n) == EOF) {
		printf("scanf: EOF\n");
	}

	int64_t s = 0;

	for (int64_t i = 5; n/i >= 1; i *= 5) {
		s += n/i;
	}

	printf("%ld", s);

	return 0;
}
