#include<iostream>
#include<vector>
#include<math.h>

using namespace  std;

static int distance(int h, int n){
  if(n==0) n=11;
  int h_x=h%3, h_y=ceil(h/3),
    n_x=n%3, n_y=ceil(n/3);

  if()

  return (abs(h_x-n_x) + abs(h_y - n_y));
  
}

int main(){
 
    /*
    */

  string answer="";
  vector<int> numbers= {1, 3, 4, 5, 8, 2, 1, 4, 5, 9, 5};
  string hand= "right";
  
  int L=0,R=0;

  for( int n : numbers ){
    if(n%3==1){
       answer+="L";
       L=n;
       }
    //첫번째줄
    else if(n%3==0 && n!=0) {
      answer +="R";
      R=n;
      }
    //두번째줄
    else {  //세번째줄
      int r= distance(R,n), l= distance(L,n);
      cout << n <<endl;
      cout<< R << " "<< r <<endl;
      cout<< L << " "<< l <<endl;
      if(r==l){
        if(hand=="left"){
          answer +="L"; L=n;
          cout <<"왼손 여기"<<endl;
        }else{
          answer+="R"; R=n;
          cout <<"오른손"<<endl;
        }
      }else if (r<l){
        answer+="R";
        R=n;
        cout <<"오른손"<<endl;
      }else if (r>l){
        answer+="L";
        L=n;
        cout <<"왼손"<<endl;
      }
    }
  }cout<<answer;
     
}
