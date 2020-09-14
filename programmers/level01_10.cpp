#include <string>


using namespace std;

string solution(int n) {
    string answer = "";
    while(n>0){
        answer.append("수");
        n--;
        if(n>0) {
            answer.append("박");
            n--;
        }
    }
    return answer;
}