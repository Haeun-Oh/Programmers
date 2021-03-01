#include<string>
using namespace std;
bool solution(string s)
{
    int chk=0;
    for(auto c: s){
        if(chk<0)
            return false;
        if(c=='(')
            chk++;
        else
            chk--;
    }
    return chk==0;
}
