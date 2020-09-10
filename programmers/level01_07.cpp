#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    bool answer = true;

    int p=0 ,y=0;
    for(char c: s){
        if(int(c)==80 || int(c)==112) p++;
        else if(int(c)==89 || int(c)==121) y++;
    }
    if(p!=y) answer=false;

    return answer;
}