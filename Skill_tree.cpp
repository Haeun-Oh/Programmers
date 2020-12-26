#include <string>
#include <vector>
#include <map>
#include<iostream>
using namespace std;
int solution(string skill, vector<string> skill_trees) {
    map<char, int> mp;
    int answer = 0;
    for (int i=0;i<skill.length();i++)
        mp.insert(pair<char, int>(skill[i],i) );
    for (int i=0;i<skill_trees.size();i++){
        string str = skill_trees[i];
        bool chk = true;
        int order = 0;
        for(int j=0;j<str.length();j++){
            if(mp.find(str[j])==mp.end())//skill아니면 continue
                continue;
            if(mp.at(str[j])!=order){//skill순서에 맞지 않으면 false
                chk=false;
                break;
            }
            else
                order++;
        }
        if(chk==true)
            answer++;
    }
    return answer;
}
