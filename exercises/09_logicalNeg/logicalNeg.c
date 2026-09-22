#include <stdio.h>

/*
 * logicalNeg - implement the ! operator, using all of
 *              the legal operators except !
 *   Examples: logicalNeg(3) = 0, logicalNeg(0) = 1
 *   Legal ops: ~ & ^ | + << >>
 *   Max ops: 12
 *   Rating: 4
 */
int logicalNeg(int x) {
      int num;
      num=x>>31;
      int mask;
      mask = num&1;
      mask =(~mask)+1;
      mask = ~mask;//生成掩码，负数生成全0，非负生成全1
      int y;
      y=(~x)+1;//得到相反数
      int a,b;
      a = x>>31;
      a = a & 1;
      b = y>>31;
      b = b & 1;//得到纯净的符号位
      return (a==b)&mask;//利用掩码筛除负数的情况，避免溢出
}

int main(void) {
  int x;
  if (scanf("%d", &x) != 1)
    return 1;
  printf("%d\n", logicalNeg(x));
  return 0;
}
