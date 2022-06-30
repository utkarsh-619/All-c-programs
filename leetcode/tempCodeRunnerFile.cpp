#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<vector<int>> mat = {{1,2},{3,4}};
    vector<vector<int>> *ptr;
    ptr = &mat;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<*((ptr+i)+j)<<endl;
        }
    }
    return 0;
}