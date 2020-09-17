#include<stdio.h>

int main() {
    int m,M;
    scanf("%d %d", &m ,&M);
    if(m==M) {
      printf("%d",m);return 0;
    }

    bool* PrimeArray = new bool[M + 1];
    for (int i = 2; i <= M; i++)  
	    PrimeArray[i] = true;

    for (int i = 2; i * i <= M; i++)
	{
			for (int j = i * i; j <= M; j += i)
			    PrimeArray[j] = false;
	}

  for(int i=m;i<=M;i++){
    if(PrimeArray[i]==true) printf("%d\n", i);
  }

  
  }
