#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(int distance, vector<int> rocks, int n) {
    sort(rocks.begin(), rocks.end());
    int answer = 0, left=1, right=distance;
    
    while(left<=right){
        int prev=0, cnt=0;
        int mid = (left+right)/2; // 각 지점 사이의 거리의 최솟값
        for(auto r:rocks){
            if(r-prev < mid) //mid가 각 지점 사이의 거리의 최솟값이므로 mid보다 작은 값에 해당하는 돌 제거
                cnt++;
            else
                prev = r;
        }
        if(distance - prev < mid) //마지막 돌과 도착점 사이의 거리도 확인
            cnt++;
        if(cnt<=n){ //n개 이하의 돌을 없애서 각 지점 사이의 거리의 최솟값의 최댓값을 만들 수 있다.
            answer = max(answer, mid);
            left = mid+1;
        }
        else
         right = mid-1;   
    }
    return answer;
}
