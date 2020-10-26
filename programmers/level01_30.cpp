#include<iostream>
#include<string>

using namespace  std;

int main(){
 
/*
1D#2S*3S //	5	 // 12 * (-1) * 2 + 21 * 2 + 31
    */

string dartResult= "1D#2S*3S";
int answer=0;
char p='n'; //s a
 int n=0,m=0; 
for(char c: dartResult){
 
  if(0<=c-48&&(int)c-48<=10){
    n=c-48;
  }else if(c=='S'){
    answer+=n;
  }
  else if(c=='D') {
    n*=n; 
    answer+=n;
  }else if (c=='T') {
    n*=(n*n); 
    answer+=n;
  }else {
    if(c=='*'){
      if(p=='n') {n*=2; p='s'; }
      else if(p=='s'){ n*=4; p='s';}
      else if(p=='a'){ n*=-2; p='a';}
    }else if(c=='#'){
      n*=-1;
      p='a';     
  }
      answer+=n;
      n=0;
    }
  }
//dkwlr

     
}
