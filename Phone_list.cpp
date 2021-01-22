#include <string>
#include <vector>
#include <iostream>
#include <map>
using namespace std;

map<string, int> m;

bool solution(vector<string> phone_book) {
    for(int i=0;i<phone_book.size();i++){
        m.insert(make_pair(phone_book[i], phone_book[i][0] - '0'));
    }

    for(auto it= m.begin(); it!= m.end();it++){
        auto iter = it;
        iter++;
        while(it->second == iter->second){
            if(it->first == iter->first.substr(0, it->first.size()))
                return false;
            iter++;
        }
    }

    return true;
}
