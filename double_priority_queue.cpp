#include <string>
#include <vector>
#include <queue>
#include <functional>
using namespace std;
 
vector<int> solution(vector<string> oper) {
    vector<int> answer(2, 0);
    int cnt = 0;
    priority_queue<int>pq;
    priority_queue<int, vector<int>, greater<int>>gpq;
    for(auto vec : oper){
        if(!cnt){
            while(!pq.empty())pq.pop();
            while(!gpq.empty())gpq.pop();
        }
        if(vec[0] == 'I'){
            string a = vec.substr(2);
            pq.push(stoi(a));
            gpq.push(stoi(a));
            cnt++;
        }
        else{
            if(!cnt)
                continue;
            if(vec[2]=='1'){
                pq.pop();
                cnt--;
            }
            else{
                gpq.pop();
                cnt--;
            }
        }
    }
    if(cnt){
        answer[0] = pq.top();
        answer[1] = gpq.top();
    }
    return answer;
}
