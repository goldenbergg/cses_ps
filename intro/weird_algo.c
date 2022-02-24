#include <stdio.h>
#include <stdint.h>

int main(int argc, char **argv)
{
	int64_t input;
	
	if (scanf("%ld", &input) == EOF) {
		printf("scanf: EOF\n");
	}
	
	printf("%ld ", input);

	for(; input > 1;) {
		if (!(input % 2)) {
			input /= 2;
		} else {
			input = (3 * input) + 1;
		}
		
		printf("%ld ", input);
	}

	return 0;
}
