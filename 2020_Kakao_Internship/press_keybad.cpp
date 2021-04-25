#include <string>
#include <vector>
#include <cmath>
using namespace std;

string solution(vector<int> numbers, string hand) {
    string answer = "";
    vector<pair<int, int>>vec;
    vec.push_back(make_pair(3, 1));
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++)
            vec.push_back(make_pair(i, j));
    }
    int ly=3, lx = 0, ry=3, rx=2;
    for(auto v: numbers){
        if(v==1||v==4||v==7){
            ly = vec[v].first, lx = vec[v].second;
            answer+="L";
        }
        else if(v==3||v==6||v==9){
            ry = vec[v].first, rx = vec[v].second;
            answer+="R";
        }
        else{
            if(abs(ly-vec[v].first) + abs(lx-vec[v].second) < abs(ry-vec[v].first) + abs(rx-vec[v].second)){
                ly = vec[v].first, lx = vec[v].second;
                answer+="L";
            }
            else if(abs(ly-vec[v].first) + abs(lx-vec[v].second) > abs(ry-vec[v].first) + abs(rx-vec[v].second)){
                ry = vec[v].first, rx = vec[v].second;
                answer+="R";
            }
            else{
                if(hand=="right"){
                    ry = vec[v].first, rx = vec[v].second;
                    answer+="R";
                }
                else{
                    ly = vec[v].first, lx = vec[v].second;
                    answer+="L";
                }
            }
        }
    }
    return answer;
}
