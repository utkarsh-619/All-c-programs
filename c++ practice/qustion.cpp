#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec1, vec2;
    for(int i=1;i<=100;i++){
        vec1.push_back(2*i);
    }
    for(int i=1;i<=80;i++){
        vec2.push_back(3*i);
    }

    int sum = 0;
    for(int i=0;i<vec1.size();i++){
        for(int j=0;j<vec2.size();j++){
            if(vec1[i] == vec2[j]) {
                sum++;break;
            }
        }
    }
    cout<<sum;
    return 0;
}