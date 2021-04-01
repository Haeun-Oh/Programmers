#include <string>
#include <vector>
#include <stack>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    int ans = 0;
    stack<int> st;
    int prev=0;
    for(int j=0;j<moves.size();j++){
        if(!st.empty())
            prev = st.top();
        for(int i=0;i<board.size();i++){
            if(board[i][moves[j]-1]){
                st.push(board[i][moves[j]-1]);
                board[i][moves[j]-1]=0;
                if(prev == st.top()){
                    st.pop();
                    st.pop();
                    ans+=2;
                }
                break;
            }
        }  
    }
    return ans;
}
