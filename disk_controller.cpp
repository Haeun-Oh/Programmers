#include <vector>
#include <queue>
#include <algorithm> 
#include <functional>
using namespace std;
 
int solution(vector<vector<int>> jobs) {
    int answer = 0, j = 0, time = 0;
    sort(jobs.begin(), jobs.end());
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    while (j < jobs.size() || !pq.empty()) {
        if (jobs.size() > j && time >= jobs[j][0]) {
            pq.push(make_pair(jobs[j][1], jobs[j][0]));
			j++;
            continue;
        }
        if (!pq.empty()) {
            time += pq.top().first;
            answer += time - pq.top().second;
            pq.pop();
        }
        else
            time = jobs[j][0];
    }
    return answer / jobs.size();
}
