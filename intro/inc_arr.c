#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(int argc, char **argv)
{
	char temp;
	size_t size;

	if (scanf("%ld", &size) == EOF) {
		printf("scanf: EOF\n");
	}

	if (scanf("%c", &temp) == EOF) {
		printf("scanf: EOF\n");
	}

	int32_t elem;
	int64_t min_moves = 0;

	for (size_t loop_idx = 0, curr_max = 0; loop_idx < size; loop_idx++) {
		if (scanf("%d", &elem) == EOF) {
			printf("scanf: EOF\n");
		}

		curr_max = ((uint32_t) elem > curr_max) ? elem : curr_max;
		min_moves += curr_max - elem;
	}
	
	printf("%ld", min_moves);

	return 0;
}
