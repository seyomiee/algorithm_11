#include <string>
#include <vector>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = lost.size();
    for(auto l=lost.begin();l!=lost.end();){
    for(auto r=reserve.begin(); r!=reserve.end();r++)
      if(*r!=-1){
      if(*l-1==*r ||*l==*r ||*l+1==*r){
        answer--;
        *r=-1;
        break;
        }}
        
      l++;
    }
    return n-answer;
}

/*

다시
🧸 귀여운거 보고 힘내야지,,
*/
