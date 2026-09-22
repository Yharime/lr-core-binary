#include <stdio.h>

/*
 * allOddBits - return 1 if all odd-numbered bits in word set to 1
 *   where bits are numbered from 0 (least significant) to 31 (most significant)
 *   Examples allOddBits(0xFFFFFFFD) = 0, allOddBits(0xAAAAAAAA) = 1
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 12
 *   Rating: 2
 */
int allOddBits(int x) {
      int i;
      int flag = 0,mark = 0xAA;
      flag+=mark;
      flag=flag<<8;
      flag+=mark;
      flag=flag<<8;
      flag+=mark;
      flag=flag<<8;
      flag+=mark;
      flag=flag<<8;
      flag+=mark;
      int a;
      a=flag&x;
    return (a==flag);
  }

int main(void) {
  int x;
  if (scanf("%d", &x) != 1)
    return 1;
  printf("%d\n", allOddBits(x));
  return 0;
}
