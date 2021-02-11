#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    for(auto vec : commands){
        int i = vec[0];
        int j = vec[1];
        int k = vec[2];
        vector<int>part;
        for(int id = i-1;id<j;id++)
            part.push_back(array[id]);
        sort(part.begin(), part.end());
        answer.push_back(part[k-1]);
    }
    return answer;
}
