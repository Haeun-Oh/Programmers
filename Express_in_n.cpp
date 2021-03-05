#include <string>
#include <vector>
#include <unordered_set>
#include <iostream>
#include <cmath>
using namespace std;

int basic_num(int num, int cnt){
    int b_num=0;
    while(cnt--)
        b_num += pow(10, cnt)*num;
    return b_num;
}
int solution(int N, int number) {
    if(N==number)
        return 1;
    
    int answer = -1;
    vector <unordered_set<int>>vec(9);
    for(int i=1;i<=8;i++)
        vec[i].insert(basic_num(N, i));
    
    for(int i=2;i<=8;i++){
        for(int j=1;j<i;j++){
            for(auto op1:vec[j]){
                for(auto op2:vec[i-j]){
                    vec[i].insert(op1+op2);
                    vec[i].insert(op1*op2);
                    vec[i].insert(op1-op2);
                    if(op2!=0)
                        vec[i].insert(op1/op2);
                }
            }
        }
        if(vec[i].find(number)!=vec[i].end()){
            answer=i;
            break;
        }
    }
    return answer;
}
