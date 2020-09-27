#include <iostream>

using namespace std;

int solution(int n) {
  int answer =0;
  for (int i = 2; i * i <= n; i++){
        for (int j = i * i; j <= n; j += i)
            answer++;
    }cout<<answer<<endl;
}
