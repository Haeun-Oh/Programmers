#include <string>
#include <vector>
#include <unordered_map>
#include <iostream>
using namespace std;

unordered_map<string, int>m;

int solution(vector<vector<string>> clothes) {
    int answer = 1;
    for(auto i:clothes)
        m[i[1]]++;
    for(auto it= m.begin(); it!= m.end();it++)
        answer *= (it->second +1);
    answer--;
    return answer;
}
