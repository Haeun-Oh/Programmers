#include <string>
#include <vector>
using namespace std;
vector<int> solution(int brown, int yellow) {
    int i=3;
    int a = 3;
    while(i < (brown+yellow)){
        if((brown+yellow)%i == 0){
            a = (brown+yellow) / i;
            if((a-2)*(i-2) == yellow)
                return vector<int>{a, i};
        }
        i++;
    }
}
