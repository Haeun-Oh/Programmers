#include <string>
#include <vector>
using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    vector<int> vec(n, 1);
    vector<int> res;
    for(auto v : lost)
        vec[v-1] = 0;
    for(auto v: reserve){
        if(vec[v-1]==0)
            vec[v-1]=1;
        else
            res.push_back(v);
    }
    for(auto v: res){
        if((v-2 >=0) && vec[v-2]==0)
            vec[v-2]=1;
        else if((v < n) && vec[v]==0)
            vec[v]=1;
    }
    for(auto v : vec){
        if(v==1)
            answer++;
    }
    return answer;
}
