#include <string>
#include <vector>
#include <map>
using namespace std;

int dx[8]={0, 1, 1, 1, 0, -1, -1, -1};
int dy[8]={-1, -1, 0, 1, 1, 1, 0, -1};

int solution(vector<int> arrows) {
    int answer = 0;
    map<pair<int, int>, bool> node_visit;
    map<pair<pair<int, int>, pair<int, int>>, bool> edge_visit;
    int x=0, y=0;
    node_visit[{y, x}]=true;
    for(auto a:arrows){
        for(int j=0;j<2;j++){
            int nx = x + dx[a];
            int ny = y + dy[a];
            
            if(node_visit[{ny, nx}] == true && edge_visit[{{y, x}, {ny, nx}}] ==false){
                edge_visit[{{y, x}, {ny, nx}}]=true;
                edge_visit[{{ny, nx}, {y, x}}] =true;
                answer++;
                x = nx;
                y = ny;
                continue;
            }
            else{
                node_visit[{ny, nx}]=true;
                edge_visit[{{y, x}, {ny, nx}}]=true;
                edge_visit[{{ny, nx}, {y, x}}] =true;
                x = nx;
                y = ny;
            }
        }
    }
    return answer;
}
