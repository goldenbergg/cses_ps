#include <stdio.h>
#include <stdint.h>

int
main(int argc, char **argv)
{
  int64_t n;

  if (scanf("%ld", &n) == EOF) {
    printf("scanf: EOF\n");
  }
	
  int64_t s = 1;

  for (int64_t i = 1; i <= n; i++) {
  	s = (2 * s) % (int64_t) (1e9 + 7);
  }
  
  printf("%ld", s);

  return 0;
}
