#include <stdio.h>

/*
 * bitXor - x^y using only ~ and &
 *   Example: bitXor(4, 5) = 1
 *   Legal ops: ~ &
 *   Max ops: 14
 *   Rating: 1
 */
int bitXor(int x, int y) {
      x=~x;
      int k = 0;
      k=x&y;
      if(k==0){
        y=~y;
        x=~x;
      }
      k=x&y;//k等于1则说明不同
      return k;
}

int main(void) {
  int x, y;
  if (scanf("%d %d", &x, &y) != 2)
    return 1;
  printf("%d\n", bitXor(x, y));
  return 0;
}
