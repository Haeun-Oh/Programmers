#include <string>
#include <vector>

using namespace std;

bool solution(string s) {
    bool answer = true;
    if(s.length()==4 || s.length()==6){
        for(const char &c : s){
            if(isdigit(c)==0)
                return false;
        }
    }
    else
        answer = false;
    return answer;
}
