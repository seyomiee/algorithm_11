#include<stdio.h>

using namespace std;


int main() {
  
  int n;
    scanf("%d", &n);
  int door=1;
  int room=2;

  while(1){
    if(n<room) break;

    room+= door*6;
    door++;
  }
  if(n==1) printf("%d\n", 1);
  else printf("%d\n", door);

}