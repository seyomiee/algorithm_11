#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    string s = to_string(x);
    int sum=0;
    
    for(int i = 0; i < s.size(); i++) sum += (s[i] - '0');
    
    return x % Sum == 0 ? true : false;


}