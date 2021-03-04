#include <string>
#include <vector>

using namespace std;
int dp[100005];
int solution(int n, vector<int> money) {
    dp[0]=1;
    for(int i=0;i<money.size();i++){
        for(int j=money[i];j<=n;j++)
            j>=money[i] ? dp[j]+=dp[j-money[i]] : 0;
    }
    return dp[n]%1000000007;
}
