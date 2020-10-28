#include <string>
#include <vector>
#include <map>

using namespace std;

vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;

    int size= stages.size();
    int p=0;
    vector<int> stage(N+1,0);
    multimap<double, int, greater<double>> fail;

    for(int a: stages){
      stage[a-1]++;
    }

    for(int a=0; a<N; a++){
     fail.insert(make_pair((double)stage[a]/size,a+1));
      size-= stage[a];
    }

    for (auto itr = fail.begin(); itr != fail.end(); ++itr) {
        answer.push_back(itr->second);
      }
    return answer;
}