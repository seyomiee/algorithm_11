#include <iostream>
#include<math.h>
#include <memory.h>

using namespace std;

int solution(int n) {
  bool* c = new bool[n + 1];
  memset(c, 1, n+1);
  int answer =0;
  
  for (int i = 2; i<= sqrt(n); i++){
        for (int j = i + i; j <= n; j += i){
          c[j]= false;
        }
    }for(int i=2;i<=n;i++){
      if(c[i]==1) 
       answer++;
       }

    delete[]c;
    return answer;
}
/*
#include <iostream>

using namespace std;

int solution(int n) {
  int answer =0;
  for (int i = 2; i * i <= n; i++){
        for (int j = i * i; j <= n; j += i)
            answer++;
    }cout<<answer<<endl;
}
*/