#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;
    vector<int> basket;
    
    for(int m: moves){
      int n=0, doll=-1;

      for(int n=0; n<board.size();n++){
      doll=board.at(n).at(m-1);
      board.at(n).at(m-1)=0;
      if(doll!=0) break; 
      }
      if(doll!=0){ 
        if(!basket.empty() && basket.back()==doll){
          answer++;
          basket.pop_back(); 
          } else basket.push_back(doll); 
      }else continue; 
    }return answer*2;
     
}