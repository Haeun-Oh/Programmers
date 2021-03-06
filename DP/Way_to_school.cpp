#include <vector>
using namespace std;

int dp[105][105];
int chk[105][105];

int solution(int m, int n, vector<vector<int>> puddles) {
    int answer = 0;
    for(int i=0;i<puddles.size();i++)
            chk[puddles[i][0]][puddles[i][1]]=1;
    
    if(chk[1][2]!=1) dp[1][2]=1;
    if(chk[2][1]!=1) dp[2][1]=1;
    
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(chk[i][j]==1 ||(i==1 && j==1)||(i==1 && j==2)||(i==2&&j==1))
                continue;
            dp[i][j] = (dp[i][j-1] + dp[i-1][j])%1000000007;
        }
    }
    return dp[m][n];
}
