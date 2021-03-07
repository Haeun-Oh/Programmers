#include <vector>
#include <stack>
using namespace std;
int visit[205];
int answer = 0;
void dfs(int x, int n, vector<vector<int>> computers){
    if(visit[x])
        return;
    visit[x]=1;
    stack<int>st;
    st.push(x);
    while(!st.empty()){
        int next = st.top();
        st.pop();
        for(int i=0;i<n;i++){
            if(i==next)
                continue;
            if(computers[next][i]==1 && !visit[i]){
                visit[i]=1;
                st.push(i);
            }
        }
    }
    answer++;
}
int solution(int n, vector<vector<int>> computers) {    
    for(int i=0;i<n;i++)
        dfs(i, n, computers);
    return answer;
}
