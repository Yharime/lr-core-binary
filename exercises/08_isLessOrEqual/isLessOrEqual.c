#include <stdio.h>

/*
 * isLessOrEqual - if x <= y then return 1, else return 0
 *   Example: isLessOrEqual(4,5) = 1.
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 24
 *   Rating: 3
 */
int isLessOrEqual(int x, int y) {
//#error TODO: Return 1 when x is less than or equal to y.
 int i,state1,state2,diff,flag1,flag2,win=3;
 diff = -1;
 state1 = 0;
 state2 = 0;
 flag1 = 0;
 flag2 = 0;
  for(i=0;i<32;i++){
    //printf("%d %d\n",x&1,y&1);
    if((x&1)==1){
      state1=i+1;
      flag1 = 1;
    }
    if((y&1)==1){
      state2=i+1;
      flag2 = 1;
    }
    if(flag1==1&&flag2==0){
      diff = i + 1;
      win = 0;
    }
    if(flag1==0&&flag2==1){
      diff = i + 1;
      win =  1;
    }
    x=x>>1;
    y=y>>1;
    flag1 = 0;
    flag2 = 0;
  }
  //printf("%d %d %d %d\n",state1,state2,win,diff);
  if(state1>state2)
  return 1;
  if(state1<state2){
    return 0;
  }
  if(state1==state2){
    if(win==3)
    return 1;
    else 
    return win;
  }

}

int main(void) {
  int x, y;
  if (scanf("%d %d", &x, &y) != 2)
    return 1;
  printf("%d\n", isLessOrEqual(x, y));
  return 0;
}
