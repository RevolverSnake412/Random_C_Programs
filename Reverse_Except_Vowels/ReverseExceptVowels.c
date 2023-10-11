#include "header.h"

char *reverseExceptVowels(char *s);

char *reverseExceptVowels(char *s) {
  char vowels[5] = {'a', 'e', 'i', 'o', 'u'};
  int length = strlen(s);
  char rev_s[length + 1];
  memset(rev_s, 0, sizeof(rev_s));
  int flag;
  int idx = 0;

  for (int i = length - 1; i >= 0; i--) {
    flag = 0;
    for (int j = 0; j < 5; j++) {
      if (s[i] == vowels[j]) {
        flag = 1;
        break;
      }
    }
    if (flag == 0) {
      rev_s[idx] = s[i];
      idx++;
    }
  }

  char full_s[length + 1];

  int k = 0;
  int x = 0;
  for (int i = 0; i < length; i++) {
    flag = 0;
    for (int j = 0; j < 5; j++) {
      if (s[i] == vowels[j]) {
        full_s[i] = s[i];
        flag = 1;
        break;
      }
    }
    if (flag == 0) {
      full_s[i] = rev_s[x];
      x++;
    }
  }
  full_s[length] = '\0';

  return strdup(full_s);
}
