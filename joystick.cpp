#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(string name) {
    int answer = 0;
    int n = name.length();
    int turn = n-1; // 앞쪽에서 오른쪽 방향으로만 이동하는 경우: 최대 이동횟수 = n-1
    for(int i=0;i<n;i++){
        answer += min(name[i]-'A', 'Z'-name[i]+1);
        int next = i+1;
        while(next <n && name[next] == 'A')
            next++;
        turn = min(turn, i + n - next + min(i, n - next));
    }
    answer+=turn;
    return answer;
}
