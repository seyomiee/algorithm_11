#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer;
    int c = n > m ? m : n;
	int d = n > m ? n : m;
      while(d%c!=0){
         int temp=c;
         c=d%c;
         d=temp;
      } answer.push_back(c);
        answer.push_back(m*n/c);
        return answer;
}