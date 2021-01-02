#include <string>
#include <stack>
#include <cmath>
#include <iostream>
using namespace std;
int solution(string s) {
    int answer = 0;
    bool chk=true;
    stack<int>st;
    for(const char& c:s){
        if(!isdigit(c)){
            if(c=='-')
                chk=false;
            continue;
        }
        int num = c-'0';
        st.push(num);
    }
    int i=0;
    while(!st.empty()){
        answer+=pow(10, i)*st.top();
        st.pop();
        i++;
    }
    if(chk==false)
        answer = -answer;
    return answer;
}
