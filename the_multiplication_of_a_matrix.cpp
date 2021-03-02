#include <string>
#include <vector>
using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    vector<vector<int>> answer;
    for(int i=0; i<arr1.size(); i++){
        vector<int>x;
        for(int k=0;k<arr2[0].size();k++){
            int num=0;
            for(int j=0, w=0; j<arr1[i].size(); j++, w++){
                num+=arr1[i][j]*arr2[w][k];
            }
            x.push_back(num);
        }
        answer.push_back(x);
    }
    return answer;
}
