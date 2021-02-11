#include <string>
#include <vector>
#include <queue>
using namespace std;
int solution(vector<int> priorities, int location) {
    int answer = 0;
    queue<pair<int, int>> que;
    priority_queue<int>pq;
    for(int i=0;i<priorities.size();i++){
        que.push(make_pair(i, priorities[i]));
        pq.push(priorities[i]);
    }
    while(!que.empty()){
        int idx = que.front().first;
        int val = que.front().second;
        que.pop();
        if(val == pq.top()){
            pq.pop();
            answer++;
            
            if(idx == location)
                return answer;
        }
        else
            que.push(make_pair(idx, val));
        
        
    }
}
