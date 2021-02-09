#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int solution(vector<int> people, int limit) {
    int answer = 0;
    sort(people.begin(), people.end());
    int left = people.size()-1;
    int right = 0;
    while(left>right){
        if(people[left]+people[right] <= limit){
            left--;
            right++;
        }
        else
            left--;
        answer++;
    }
    if(left==right)
            answer++;
    return answer;
}
