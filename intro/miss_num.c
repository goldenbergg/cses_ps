#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(int argc, char **argv)
{
	char temp;
	int64_t nums;

	if (scanf("%ld", &nums) == EOF) {
		printf("scanf: EOF\n");
	}
	
	if (scanf("%c", &temp) == EOF) {
		printf("scanf: EOF\n");
	}
	
	int64_t curr_num;
	int64_t sum = 0;
	
	for (size_t loop_idx = 1; loop_idx < (uint64_t) nums; loop_idx++) {
		if (scanf("%ld", &curr_num) == EOF) {
			printf("scanf: EOF\n");
		}

		sum += curr_num;
	}
	
	int64_t miss_num = nums * (nums + 1) / 2 - sum;
	printf("%ld", miss_num);

	return 0;
}
