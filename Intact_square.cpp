#include <iostream>
using namespace std;

long long gcd(long long a, long long b){
    if(a%b==0){
            return b;
        }
    else
        return gcd(b, a%b);
}

long long solution(int w,int h) {
    long long answer = 1;
    long long long_w = (long long)w;
    long long long_h = (long long)h;
    int left = long_w+long_h-gcd(long_w, long_h);
    answer = long_w*long_h - left;
    return answer;
}
