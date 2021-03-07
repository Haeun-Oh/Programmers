#include <string>
#include <vector>
using namespace std;
int answer = 100;
int visit[55];
bool cmp(const string& a, const string& b){
    int chk=0;
    for(int j=0;j<a.length();j++){
        if(a[j]!=b[j]) chk++;
        if(chk>1)
            return false;
    }
    return true;
}
void dfs(string begin, string target, vector<string> words, int cnt=0){
    for(int i=0;i<words.size();i++){
        if(!visit[i] && (cmp(begin, words[i])==true)){
            if(words[i] == target && answer>cnt+1)
                answer = cnt+1;
            visit[i]=1;
            dfs(words[i], target, words, cnt+1);
            visit[i]=0;
        }
    }
}
int solution(string begin, string target, vector<string> words) {
    dfs(begin, target, words);
    if(answer==100) return 0;
    return answer;
}
