#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int m;

bool sorting(string a, string b){ 
  return (a.at(m)!=b.at(m)) ? a.at(m)<b.at(m) : a<b; 
}

vector<string> solution(vector<string> strings, int n) {
    m=n;
    sort(strings.begin(), strings.end(), sorting);      
    return strings;
}