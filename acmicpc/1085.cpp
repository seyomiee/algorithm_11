#include <stdio.h>

int main() {
  int x, y, w, h;
  int answer;
  scanf("%d %d %d %d",&x,&y,&w,&h);
  w -= x;
  h -= y;
  x = x>=w?w:x;
  y = y>=h?h:y;
  answer= x>=y?y:x;
  printf("%d",answer);
}