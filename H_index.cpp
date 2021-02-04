#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> citations) {
    int answer = 0;

    // 내림차순 정렬
    sort(citations.begin(), citations.end(), greater<int>());

    int h = 0;

    for(int i=0; i< citations.size(); i++){
        ++h;

        if( i+1 >= citations[i]){
            if(i+1 > citations[i]) h = i;
            else h = i+1;
            break;
        }
    }

    answer = h;
    return answer;
}
