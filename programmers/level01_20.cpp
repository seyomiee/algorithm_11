#include <string>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    for(char c: s){
    if(c==' ') answer +=' ';
    else{
      char s=(c>='a'&&c<='z'? s='a': s='A');
      answer+=s+(c+n-s)%26;
    }
  }
    return answer;
}