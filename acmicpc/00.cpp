#include <vector>
long long sum(std::vector<int> &a) {
	  long long ans = 0;
      std::vector<int>::iterator itor = a.begin();
      for (; itor != a.end(); itor++){
            ans+= *itor;
          }

	return ans;
}