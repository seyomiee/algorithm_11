#include <string>
#include <math.h>

using namespace std;

long long solution(long long n) {
    long long m= sqrt(n);
  if (n%m==0 && pow(m,2)==n) return (m+1)*(m+1);
  else return -1;

}