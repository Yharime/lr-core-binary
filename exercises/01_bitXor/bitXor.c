#include <stdio.h>

/*
 * bitXor - x^y using only ~ and &
 *   Example: bitXor(4, 5) = 1
 *   Legal ops: ~ &
 *   Max ops: 14
 *   Rating: 1
 */
int bitXor(int x, int y) {
      int k1 = 0,k2 = 0;
      k1=(~x)&y;
      k2=(~y)&x;
      return ~((~k1)&(~k2));
}

int main(void) {
  int x, y;
  if (scanf("%d %d", &x, &y) != 2)
    return 1;
  printf("%d\n", bitXor(x, y));
  return 0;
}
