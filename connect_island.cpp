#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int parent[100];

bool cmp(vector<int> a, vector <int> b){
    return a[2] < b[2];
}

int find(int x){
    if(parent[x]==x)
        return x;
    else
        return parent[x]=find(parent[x]);
}

int solution(int n, vector<vector<int>> costs) {
    int answer = 0;
    for(int i=0;i<n;i++)
        parent[i] = i;
    sort(costs.begin(), costs.end(), cmp);
    
    for(int i=0;i<costs.size();i++){
        if(find(costs[i][0])!=find(costs[i][1])){
            parent[find(costs[i][0])] = find(costs[i][1]);
            answer+=costs[i][2];
        }
    }
    return answer;
}
