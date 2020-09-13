#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    int l= s.length();
    string answer = "";
    if(l%2!=0) {
        answer+= s.at(l/2);}
    else{
        answer+= s.at(l/2-1);
        answer+=s.at(l/2);
    }
    return answer;
}