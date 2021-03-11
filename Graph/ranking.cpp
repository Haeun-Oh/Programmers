#include <string>
#include <vector>
#include <string.h>
using namespace std;
 
int dis[105][105];
int solution(int n, vector<vector<int>> results) {
    int answer = 0;
    memset(dis, false, sizeof(dis));
    for (auto r : results)  graph[r[0]][r[1]] = true;
    for (size_t i = 1; i <= n; i++) {
        for (size_t j = 1; j <= n; j++) {
            for (size_t k = 1; k <= n; k++) {
                if (graph[j][i] && graph[i][k]) {
                    graph[j][k] = true;
                }
            }
        }
    }
    for (size_t i = 1; i <= n; i++) {
        int count = 0;
        for (size_t j = 1; j <= n; j++) {
            if (graph[i][j] || graph[j][i]) count++; // i가 j를 이기거가 j가 i를 이긴 경우
        }
        if (count == n - 1) answer++;
    }
    return answer;
}
