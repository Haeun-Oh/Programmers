#include <string>
#include <vector>
#include <queue>
using namespace std;

int visit[20005];
int adj[20005][20005];
int dis[20005];

int solution(int n, vector<vector<int>> edge) {
    int answer = 0, MAX=-1;
    
    for(int i=0;i<edge.size();i++){
        adj[edge[i][0]][edge[i][1]]=1;
        adj[edge[i][1]][edge[i][0]]=1;
    }
    
    queue<int>que;
    que.push(1);
    visit[1]=1;
    
    while(!que.empty()){
        int next = que.front();
        que.pop();
        for(int i=2;i<=n;i++){
            if(adj[next][i] && !visit[i]){
                que.push(i);
                visit[i]=1;
                dis[i] = dis[next]+1;
            }
        }
        if(MAX<dis[next])
            MAX = dis[next];
    }
    
    for(int i=2;i<=n;i++){
        if(dis[i]==MAX)
            answer++;
    }
    
    return answer;
}
