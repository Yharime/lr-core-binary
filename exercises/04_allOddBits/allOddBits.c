#include <stdio.h>

/*
 * allOddBits - return 1 if all odd-numbered bits in word set to 1
 *   where bits are numbered from 0 (least significant) to 31 (most significant)
 *   Examples allOddBits(0xFFFFFFFD) = 0, allOddBits(0xAAAAAAAA) = 1
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 12
 *   Rating: 2
 */
int sum_(int a){
  int i;
  int op = 1;
  for(i=1;i<=a;i++){
      op*=2;
  }
  return op;
}
int allOddBits(int x) {
//#error TODO: Return 1 if every odd-numbered bit of x is set.
      /*int fu = 0;
      if(x<0){
        x=~x;
        fu = 1;
      }*/
      int i;
      int flag = 0,mark = 170;
      for(i=0;i<4;i++){
        flag+=mark;
        flag=flag<<8;
      }//flag=1010101010101010101010
      flag+=mark;
      //printf("%d\n",flag);
      //flag=~flag;//010101010101010101
      //printf("%d\n",flag);
      /*int num=0;
      int state=0;
      for(i=0;i<32;i++){
        //printf("%d\t%d\n",i,(-3)^flag);
        if(((i%2)==0)&&(x%2)==1){
          num = num + sum_(state);
          printf("%d\t%d\t%d\n",sum_(state),i,x);
          state = state + 2;
        }
        x/=2;
      }
      printf("%d\t%d\n",num,flag);
      if((num^flag)==0){
        if(fu==0) 
          return 1;
          else
          return 0;
      }
      else
      return 0;*/
      int a;
      a=flag&x;
      //printf("%d\n",a);
      if((flag^a)==0){
        return 1;
      }
      return 0;
    }

int main(void) {
  int x;
  if (scanf("%d", &x) != 1)
    return 1;
  printf("%d\n", allOddBits(x));
  return 0;
}
