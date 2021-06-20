#include <string>
#include <vector>
using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    int state = 0, x=-1, y=0, num=1;
    int arr[1005][1005]={0,};
    for(int i=0;i<n;i++){
        switch(state){
            case 0:
                for(int j=i;j<n;j++)
                    arr[++x][y]=num++;
                state=1;
                break;
            case 1:
                for(int j=i;j<n;j++)
                    arr[x][++y]=num++;
                state=2;
                break;
                
            case 2:
                for(int j=i;j<n;j++)
                    arr[--x][--y]=num++;
                state=0;
                break;                
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++)
            answer.push_back(arr[i][j]);
    }
    return answer;
}
