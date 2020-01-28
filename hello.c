#include <gmp.h>

int main() {
  mpz_t n;
  mpz_init(n);
  gmp_scanf("%Zd", n);
  mpz_nextprime(n, n);
  gmp_printf("%Zd\n", n);
  return 0;
}
