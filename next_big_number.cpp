using namespace std;

int func(int num){
    int cnt=0;
    while(num){
        cnt += num%2;
        num=num/2;
    }
    return cnt;
}

int solution(int n) {
    int num = n;
    int n_cnt = func(n);
    
    for(int i=n+1;;i++){
        if(func(i)==n_cnt)
            return i;
    }
}
