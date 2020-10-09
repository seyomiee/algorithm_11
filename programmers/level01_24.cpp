#include <string>
#include <algorithm>
#include <string>

using namespace std;

long long solution(long long n) {
    string s= to_string(n);
    sort(s.begin(),s.end());
    reverse(s.begin(),s.end());
    long long answer =stoll(s);
    return answer;
}