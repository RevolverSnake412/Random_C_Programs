#include "header.h"

int main(void) {
  char s[] = "programming";
  char *rev = reverseExceptVowels(s);
  printf("%s\n", rev);
  rev = reverseExceptVowels("hello");
  printf("%s\n", rev);
  rev = reverseExceptVowels("pizza hut");
  printf("%s\n", rev);
  rev = reverseExceptVowels("metal gear solid");
  printf("%s\n", rev);
  rev = reverseExceptVowels("starfield");
  printf("%s\n", rev);
  free(rev);
  return 0;
}

