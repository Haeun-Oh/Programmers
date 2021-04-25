#include <string>
#include <vector>
#include <algorithm>
using namespace std;
bool cmp(const pair<double, int> &a, const pair<double, int>&b){
    if(a.first==b.first)
        return a.second<b.second;
    return a.first>b.first;
}
vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;
    vector<pair<double, int>>chk;
    for(int i=1;i<=N;i++){
        double cnt=0, fail=0;
        for(auto s : stages){
            if(s>=i){
                if(s==i)
                    fail+=1;
                cnt+=1;
            }
        }
        if(cnt==0)
                chk.push_back(make_pair(0, i));
        else
            chk.push_back(make_pair(fail/cnt, i));
    }
    sort(chk.begin(), chk.end(), cmp);
    for(auto c  :chk)
        answer.push_back(c.second);
    return answer;
}
