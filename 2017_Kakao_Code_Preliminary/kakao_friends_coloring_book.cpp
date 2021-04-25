#include <vector>
#include <iostream>
#include <queue>
#include <algorithm>
#include <cstring>
using namespace std;

int visit[105][105];

int dx[] {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

int bfs(int y, int x, int m, int n, vector<vector<int>> picture){
    queue<pair<int, int>> que;
    que.push(make_pair(y, x));
    visit[y][x]=1;
    int size=1;
    while(!que.empty()){
        int nowy = que.front().first;
        int nowx = que.front().second;
        que.pop();
        for(int i=0;i<4;i++){
            int nextx = nowx + dx[i];
            int nexty = nowy+dy[i];
            if(nextx>=n||nexty>=m||nextx<0||nexty<0)
                continue;
            if(visit[nexty][nextx]!=1){
                if(picture[nexty][nextx] == picture[y][x]){
                    visit[nexty][nextx]=1;
                    que.push(make_pair(nexty, nextx));
                    size++;
                }
            }
        }
    }
    return size;
}

// 전역 변수를 정의할 경우 함수 내에 초기화 코드를 꼭 작성해주세요.
vector<int> solution(int m, int n, vector<vector<int>> picture) {
    int number_of_area = 0;
    int max_size_of_one_area = 0;
    memset(visit, 0, sizeof(visit));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(!visit[i][j] && picture[i][j]){
                max_size_of_one_area = max(max_size_of_one_area, bfs(i, j, m, n, picture));
                number_of_area++;
            }
        }
    }
    
    vector<int> answer(2);
    answer[0] = number_of_area;
    answer[1] = max_size_of_one_area;
    return answer;
}
