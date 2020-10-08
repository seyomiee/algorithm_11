#include <iostream>
#include <vector>
#include <algorithm>

//가장 작은 수가 여러개일 수 있음
// 정렬시키지 않음

using namespace std;

vector<int> solution(vector<int> arr) {
  vector<int> answer;
  
  auto min= min_element(arr.begin(),arr.end());
  int n= arr.size();

  if(n==1){
    answer.push_back(-1);
    return answer;
  }
  for(auto m: arr){
    if(m!=*min) answer.push_back(m);
  }return answer;  
}