#include <string>
#include <vector>
#include <string.h>
using namespace std;

bool dis[105][105];

int solution(int n, vector<vector<int>> results) {
    int answer = 0;
    memset(dis, false, sizeof(dis));
    for(auto r : results)
        dis[r[0]][r[1]]=true;
    
    for(int k=1; k<=n;k++){
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                if(dis[i][k] && dis[k][j])
                    dis[i][j] = true;
            }
        }
    }
    
    for(int i=1;i<=n;i++){
        int chk=0;
        for(int j=1;j<=n;j++){
            if(dis[i][j] || dis[j][i])// i가 j를 이기거가 j가 i를 이긴 경우
                chk++;
        }
        if(chk==n-1)
            answer++;
    }
    return answer;
}
