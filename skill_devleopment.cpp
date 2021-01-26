#include <string>
#include <vector>
#include <stack>
#include <iostream>
using namespace std;
vector<int> solution(vector<int> prog, vector<int> sp) {
    vector<int> answer;
    stack<int>st;
    for(int i = prog.size()-1;i>=0;i--)
		st.push((99-prog[i])/sp[i]+1);
    int MAX = 0;
    while(!st.empty()){
        if(MAX>=st.top())
            answer.back()++;
        else{
            answer.push_back(1);
            MAX = st.top();
        }
        st.pop();
    }
    return answer;
}
