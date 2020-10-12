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
가장 먼저 잃어버린 학생이 여벌을 갖고 왔는지부터 체크해 줘야 하는데
문제를 꼼꼼히 읽지 않아서..실행 해 봤을 때
맨 마지막 테스트 케이스에서 실패가 하나 뜬다
다시 해야 하는데 for문 사용하는거에 이상하게 스트레스를 너무 받아서 그냥 일단
넘어가려고 한다,,,ㅠㅠ
🧸 귀여운거 보고 힘내야지,,
*/