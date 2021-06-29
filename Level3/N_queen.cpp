#include <string>
#include <vector>
#include <string.h>
#include <cmath>
using namespace std;

int board[13];
int answer;

bool chk(int idx, int n){
    for(int i=1;i<idx;i++){
        if(board[idx]==board[i] ||  (abs(board[idx]-board[i])==idx-i))
            return false;
        }
    return true;
}

void n_queen(int idx, int n){
    if(idx == n+1){
        answer++;
        return;
    }
    for(int i=1;i<= n;i++){
        board[idx]=i;
        if(chk(idx, n))
            n_queen(idx+1, n);
    }
}

int solution(int n) {
    n_queen(1, n);
    return answer;
}
