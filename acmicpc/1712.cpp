#include<stdio.h>

int main() {
  int a,b,c;
  scanf("%d %d %d", &a, &b,&c);

  int n= a/(c-b)+1;

  if (b >= c) printf("-1\n");
  else printf("%d",n);  
  }
