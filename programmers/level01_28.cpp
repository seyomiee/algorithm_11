#include<iostream>
#include<vector>
#include<algorithm>

using namespace  std;

int main(){
 
    int answer=0;
    vector<vector<int>> board={
      {0,0,0,0,0},
      {0,0,1,0,3},
      {0,2,5,0,1},
      {4,2,4,4,2},
      {3,5,1,3,1}};
     vector<int> moves= {1,5,3,5,1,2,1,4};

     vector<int> basket;

    for(int m: moves){
      int doll=board.at(m-1).back();
      board.at(m-1).pop_back();

      if(doll!=0){ 
        if(!basket.empty() && basket.back()==doll){
          answer++;
          basket.pop_back(); 
          } else basket.push_back(doll); 
      }else continue; 
    }cout<<answer*2<<"answer";
     
}
//묹 잘못 읽어서 다시 풀어야 함 ㅎㅎㅎ;;;;;;
