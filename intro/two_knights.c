#include <stdio.h>
#include <stdint.h>

int main(int argc, char **argv)
{
	int64_t n;

	if (scanf("%ld", &n) == EOF) {
		printf("scanf: EOF\n");
		return 0;
	}

	if (!n) {
		return 0;
	}
	

	for(int64_t loop_idx = 1; loop_idx <= n; loop_idx++) {
		printf("%ld\n", (loop_idx > 2) ? (loop_idx * loop_idx) * 
				((loop_idx * loop_idx) - 1) / 2 - 4 * (loop_idx - 1) * 
				(loop_idx - 2) : (loop_idx * loop_idx) * ((loop_idx * 
				loop_idx) - 1) / 2);
	}
}
