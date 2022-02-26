#include <stdio.h>
#include <stdint.h>

int main(int argc, char **argv)
{
	int64_t n;
	
	if (scanf("%ld", &n) == EOF) {
		printf("scanf: EOF\n");
	}
	
	printf("%ld ", n);

	for(; n != 1;) {
		n = (!(n % 2)) ? n / 2 : 3 * n + 1;
		printf("%ld ", n);
	}
	
	return 0;
}
