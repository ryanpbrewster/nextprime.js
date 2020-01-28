#include <stdio.h>
#include <gmp.h>

int main(int argc, char** argv) {
  if (argc != 2) {
    fprintf(stderr, "provide an input number\n");
    return 1;
  }
  mpz_t n;
  mpz_init(n);
  if (mpz_set_str(n, argv[1], 10)) {
    fprintf(stderr, "input is not a valid number: %s\n", argv[1]);
    return 2;
  }
  mpz_nextprime(n, n);
  gmp_printf("NextPrime[%s] == %Zd\n", argv[1], n);
  return 0;
}
