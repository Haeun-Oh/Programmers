#include <string>
#include <vector>
using namespace std;
int func(int a, int b){
    if(a%b==0)
        return b;
    return func(b, a%b);
}
int solution(vector<int> arr) {
    int max_num = arr[0];
    for(int i=1;i<arr.size();i++)
        max_num = max_num*arr[i] / func(max_num, arr[i]);
    return max_num;
}
