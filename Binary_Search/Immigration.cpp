#include <string>
#include <vector>
#include <algorithm>
using namespace std;
long long solution(int n, vector<int> times) {
    int MAX = *max_element(times.begin(), times.end());
    long long left=1, right=n*(long long)MAX;
    long long answer = right;
    while(left<=right){
        long long mid = (left+right)/2;
        long long sum=0;
        for(auto time:times)
            sum += mid/time;
        if(sum>=n){
            right = mid-1;
            answer = min(answer, mid);
        }
        else
            left=mid+1;
    }
    return answer;
}
