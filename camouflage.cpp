#include <string>
#include <vector>
#include <map>
#include <iostream>
using namespace std;

map<string, int>m;

int solution(vector<vector<string>> clothes) {
    int answer = 0;
    for(auto i:clothes)
        m[i[1]]++;
    int num = 1;
    for(auto it= m.begin(); it!= m.end();it++)
        answer *= (it->second +1);
    answer--;
    return answer;
}
