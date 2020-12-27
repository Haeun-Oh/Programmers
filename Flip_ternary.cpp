#include <string>
#include <stack>
#include <iostream>

using namespace std;

int solution(int n) {
    int answer = 0;
    int num=1;
    stack<int>st;
    while(n>0){
        st.push(n%3);
        n=n/3;
    }
    
    while(!st.empty()){
        answer += st.top()*num;
        num=num*3;
        cout <<num<<" ";
        st.pop();
    }
    
    return answer;
}
