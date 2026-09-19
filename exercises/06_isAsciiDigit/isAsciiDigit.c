#include <stdio.h>

/*
 * isAsciiDigit - return 1 if 0x30 <= x <= 0x39 (ASCII codes for characters '0'
 * to '9') Example: isAsciiDigit(0x35) = 1. isAsciiDigit(0x3a) = 0.
 *            isAsciiDigit(0x05) = 0.
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 15
 *   Rating: 3
 */
int isAsciiDigit(int x) {
  /*char y;
  y = (char) x;
  printf("%c\n",y);*/
  /*if(x>0x39){
    printf("1");
  }*/
  if(x>=0x30&&x<=0x39){
    //printf("%d %d\n",x,0x39);
    return 1;
  }
  
  else
  return 0;
//#error TODO: Return 1 when x is between 0x30 and 0x39 inclusive.
}

int main(void) {
  int x;
  if (scanf("%d", &x) != 1)
    return 1;
  printf("%d\n", isAsciiDigit(x));
  return 0;
}
