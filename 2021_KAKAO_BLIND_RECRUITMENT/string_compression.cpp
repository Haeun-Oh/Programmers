#include <string>
#include <algorithm>
using namespace std;

int solution(string s) {
    int answer = s.length(); //압축이 불가능한 경우 정답은 원래 문자열의 길이
    
    for(int i=1;i<=s.size()/2;i++){
        string tmp = s.substr(0, i);
        string compress="";
        int cnt = 1;
        for(int j=i;j<s.size();j+=i){
            if(tmp==s.substr(j, i))
                cnt++;
            else{
                if(cnt>1) compress+=to_string(cnt);
                compress+=tmp;
                tmp = s.substr(j, i);
                cnt = 1;
            }
        }
        if(cnt>1) compress+=to_string(cnt);
        compress+=tmp;
        answer=min(answer, int(compress.length()));
    }
    return answer;
}
