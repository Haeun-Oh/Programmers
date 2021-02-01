#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(const string &a, const string &b){
    return a+b > b+a;
}

string solution(vector<int> numbers) {
    string answer = "";
    vector<string> sv;
    for(auto vec : numbers){
        sv.push_back(to_string(vec));
    }
    sort(sv.begin(), sv.end(), cmp);
    for(auto vec : sv)
        answer+=vec;
    if(answer[0] == '0')
        answer = "0";
    return answer;
}
