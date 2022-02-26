#include <stdio.h>
#include <stdint.h>

int main(int argc, char **argv)
{
	char temp;
	int64_t t;
	
	if (scanf("%ld", &t) == EOF) {
		printf("scanf: EOF\n");
		return 0;
	}

	if (!t) {
		return 0;
	}

	int64_t r, c, k, l, res;

	for (size_t test_idx = 0; test_idx < (uint64_t) t; test_idx++) {
		if (scanf("%c", &temp) == EOF) {
			printf("scanf: EOF\n");
			return 0;
		}

		if (scanf("%ld", &r) == EOF) {
			printf("scanf: EOF\n");
			return 0;
		}

		if (scanf("%ld", &c) == EOF) {
			printf("scanf: EOF\n");
			return 0;
		}
		
		k = (r > c) ? r : c;
		l = (k - 1) * (k - 1);

		res = (k % 2) ? (r == k) ? l + c : l + 2 * k - r : 
			(c == k) ? l + r : l + 2 * k - c;

		printf("%ld\n", res);
	}
	
	return 0;
}
