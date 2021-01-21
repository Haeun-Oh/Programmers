#include <string>
#include <vector>
#include <map>
using namespace std;

map<string, int>m;

string solution(vector<string> participant, vector<string> completion) {
    for(int i=0;i<participant.size();i++){
        if(m.find(participant[i])==m.end())
            m.insert(pair<string, int>(participant[i], 1));
        else
            m.find(participant[i])->second++;
    }
    for(int i=0;i<completion.size();i++)
            m.find(completion[i])->second--;
    for(auto it= m.begin();it!=m.end(); it++){
        if(it->second!=0)
            return it->first;
    }
}
