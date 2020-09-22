#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    string answer = "";
    int s =0;
    std::vector<std::string> w = { "THU", "FRI", "SAT","SUN", "MON", "TUE", "WED"};
  int m[] = {31, 29, 31, 30, 31, 30,31, 31, 30, 31, 30, 31};
    for(int i=0; i<a-1; i++){
        s+=m[i];
    }s+=b;
    answer=w[s%7];
    
    return answer;
}