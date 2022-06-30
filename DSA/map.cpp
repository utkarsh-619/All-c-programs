#include<bits\stdc++.h>
using namespace std;

int main(){
    vector<pair<int,int>>m;

    m.push_back(pair<int,int>(1,3));
    m.push_back(pair<int,int>(2,4));
    m.push_back(pair<int,int>(4,1));
    m.push_back(pair<int,int>(3,6));

    sort(m.begin(),m.end());

    for (auto& it : m) {
        cout << it.first << ' '
             << it.second << endl;
    }
    return 0;
}