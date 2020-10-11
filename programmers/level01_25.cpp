#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int n=0;
    for(int i=0;i<s.length();i++){
    if(s[i]==' ') {
      n=0;
      answer+=' ';}
    else if('a'<=s[i]&&s[i]<='z'){
      n%2!=0? answer+= s[i] : answer+= (s[i]-32);
      n++;}
    else if('A'<=s[i] && s[i]<='Z'){
      n%2!=0? answer+= (s[i]+32) : answer+=s[i];
      n++;}
  } 
    return answer;
}