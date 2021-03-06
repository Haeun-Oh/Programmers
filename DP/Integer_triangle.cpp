#include <vector>
#include <algorithm>
using namespace std;

int dp[505][505];

int solution(vector<vector<int>> triangle) {
    int answer = 0;
    dp[0][0]=triangle[0][0];
    
    for(int i=1;i<triangle.size();i++){
        dp[i][0] = triangle[i][0] + dp[i-1][0];
        for(int j=1;j<triangle[i].size();j++){
            dp[i][j] = triangle[i][j]+max(dp[i-1][j-1], dp[i-1][j]);
            if(i == triangle.size()-1)
                answer=max(answer, dp[i][j]);
        }
    }
    return answer;
}
