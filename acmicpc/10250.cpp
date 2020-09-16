#include<stdio.h>

int main() {
  int c;
  scanf("%d",&c);
  
  int h,w,guest;
  for(int i=0; i<c;i++){
    scanf("%d %d %d", &h,&w,&guest);

    if(guest%h==0) printf("%d\n", h*100+(guest/h));
    else printf("%d\n", (guest%h)*100+guest/h+1);
  }
  return 0;
  }
