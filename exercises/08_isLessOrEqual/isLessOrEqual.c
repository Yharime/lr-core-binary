#include <stdio.h>

/*
 * isLessOrEqual - if x <= y then return 1, else return 0
 *   Example: isLessOrEqual(4,5) = 1.
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 24
 *   Rating: 3
 */
int isLessOrEqual(int x, int y) {
  int a,b;
  a=x>>31;
  b=y>>31;//得到符号位
  int same,diff;
  same = !(a^b);//相同则same为1
  same = ~same + 1;//生成掩码
  diff = ~same;//生成反掩码实现条件选择
  int num;
  num = y +(~x+1);//最初用的x-y后面为避免相等的情况被放错，改为y-x
  num = num>>31;//得到符号位
  num = !num;//同号的情况下，若差符号位为1，说明x更大，我们需要0，故用！取反。差符号位为0(这里正好将相等的情况处理了)，说明x更小，我们需要1.
  int ans1,ans2;
  ans1 = num&same;//若同号则same为全一，则全通过
  ans2 = diff&(a&1);//a&1是为了得到纯净的符号位，避免得到1111111111111111的-1(原因与右移情况有关，会不断补充最高位的值)
  return ans1|ans2;//实现二元选择
}

int main(void) {
  int x, y;
  if (scanf("%d %d", &x, &y) != 2)
    return 1;
  printf("%d\n", isLessOrEqual(x, y));
  return 0;
}
