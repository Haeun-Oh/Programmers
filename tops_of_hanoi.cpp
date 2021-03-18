#include <string>
#include <vector>
using namespace std;

vector<vector<int>> answer;

//                          1           3      2
//       원반 갯수, 출발지 기둥 번호, 목적지, 나머지
void hanoi(int num, int from, int to, int other){
    if(num==0)
        return;
    hanoi(num-1, from, other, to); // 원반의 개수가 num보다 하나 적은 원발들을 목적지가 아닌 곳으로 재귀적으로 이동시킨다.
    answer.push_back({from, to}); // 맨 아래 원반을 from에서 to로 옮긴다.
    hanoi(num-1, other, to, from); // other로 옮겼던 원반들을 to 위에 얹는다.
}

vector<vector<int>> solution(int n) {
    hanoi(n, 1, 3, 2);
    return answer;
}
