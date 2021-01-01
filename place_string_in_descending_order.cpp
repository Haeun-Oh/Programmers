#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
 
using namespace std;
 
string solution(string s) {
    vector <char> vec;
    string answer = "";
    for(int i=0;i<s.length();i++)
        vec.push_back(s[i]);
    sort(vec.rbegin(), vec.rend());
    answer.assign(vec.begin(), vec.end());
    return answer;
}
