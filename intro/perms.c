#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(int argc, char **argv)
{
	int32_t n;

	if (scanf("%d", &n) == EOF) {
		printf("scanf: EOF\n");
	}

	if (n == 1) {
		printf("1");
		return 0;
	}

	if (n == 2 || n == 3) {
		printf("NO SOLUTION");
		return 0;
	}
	
	if (!(n % 2)) {
		for (int32_t loop_idx = 2; loop_idx <= n; loop_idx += 2) {
			printf("%d ", loop_idx);
		}

		for (int32_t loop_idx = 1; loop_idx < n; loop_idx += 2) {
			printf("%d ", loop_idx);
		}
	} else {
		for (int32_t loop_idx = n - 1; loop_idx > 0; loop_idx -= 2) {
			printf("%d ", loop_idx);
		}

		for (int32_t loop_idx = n; loop_idx > 0; loop_idx -= 2) {
			printf("%d ", loop_idx);
		}
	}

	return 0;
}
