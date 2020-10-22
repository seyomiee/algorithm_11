#include <string>
#include <vector>
#include<math.h>

using namespace std;

static int x(int x){
  if(x%3==2) return 2;
  else if(x%3==1) return 1;
  else return 3;
}

static int distance(float h, float n){
  if(n==0) n=11;
  int h_x=x(h) ,h_y=ceil(h/3),
    n_x=x(n), n_y=ceil(n/3);


  return (abs(h_x-n_x) + abs(h_y - n_y));
  
}
string solution(vector<int> numbers, string hand) {
    string answer = "";
    int L=0,R=0;
    for( int n : numbers ){
    if(n%3==1){
       answer+="L";
       L=n;
       }
    else if(n%3==0 && n!=0) {
      answer +="R";
      R=n;
      }else {
      int r= distance(R,n), l= distance(L,n);
      if(r==l){
        if(hand=="left"){
          answer +="L"; L=n;
        }else{
          answer+="R"; R=n;
        }
        }else if (r<l){
        answer+="R";
        R=n;
      }else if (r>l){
        answer+="L";
        L=n;
      }
    }
  }return answer;
}