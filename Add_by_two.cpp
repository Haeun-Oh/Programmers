#include <string>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

vector<int> solution(vector<int> numbers) {
    set<int>s;
    set<int>::iterator iter;
    vector<int>vec;
    for(int i=0;i<numbers.size()-1;i++){
        for (int j=i+1;j<numbers.size();j++)
         s.insert(numbers[i]+numbers[j]);
    }
    for (iter = s.begin(); iter!=s.end();iter++){
        vec.push_back(*iter);
    }
    return vec;
}
