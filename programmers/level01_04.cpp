#include <string>
#include <vector>

using namespace std;

bool solution(string s) {
    
    bool answer = false;
    if(s.length()==4 || s.length()==6){
        for(char c: s){
            if(c-48>9) return answer;
        }
        answer=true; return answer;
    }else return answer;
    
}