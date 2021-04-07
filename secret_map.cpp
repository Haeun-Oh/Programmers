#include <string>
#include <vector>
using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer(n, "");
    for(int i=0;i<n;i++){
        int num = arr1[i];
        int j=0;
        while(num>0){
            if(num%2)
                answer[i] = "#"+answer[i];
            else
                answer[i] = " "+answer[i];
            num/=2;
            j++;
        }
        if(j!=n){
            while(j<n){
                answer[i] = " "+answer[i];
                j++;
            }
        }
    }
    for(int i=0;i<n;i++){
        int num = arr2[i];
        int j=n-1;
        while(num>0){
            if(num%2){
                answer[i][j] = '#';
            }
            num/=2;
            j--;
        }
    }
    return answer;
}
