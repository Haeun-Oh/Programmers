#include <string>
#include <vector>
#include <queue>
using namespace std;
int solution(int bridge_length, int weight, vector<int> truck_weights) {
	int answer = 0;
	int curWeight = 0; //현재 다리 위에 있는 트럭 무게
	int idx = 0; //트럭 인덱스
	queue<int> q; //다리 위에 있는 트럭 큐
	while (1) {
		answer++;
		if (q.size() == bridge_length) { //트럭이 다리를 건너면 무게 빼주고 제거
			curWeight -= q.front();
			q.pop();
		}
		if (curWeight + truck_weights[idx] <= weight) { //트럭 추가할 수 있으면 추가
			if (idx == truck_weights.size() - 1) { //마지막 트럭인 경우 
				answer += bridge_length;
				break;
			}
			q.push(truck_weights[idx]);
			curWeight += truck_weights[idx];
			idx++;
		}
		else {
			q.push(0); //트럭을 더 못 올리면 0으로 트럭 이동시키기
		}
	}
	return answer;
}
