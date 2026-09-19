#include <stdio.h>

/*
 * negate - return -x
 *   Example: negate(1) = -1.
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 5
 *   Rating: 2
 */
int negate(int x) {
    if(x==0){
      return 0;
    }
    if(x>0){
      x=~x;
      x+=1;
      return x;
    }
    if(x<0){
      x-=1;
      x=~x;
      return x;
    }
//#error TODO: Return the two's-complement negation of x
}

int main(void) {
  int x;
  if (scanf("%d", &x) != 1)
    return 1;
  printf("%d\n", negate(x));
  return 0;
}
