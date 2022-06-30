#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    int i=2;
    str.push_back("d" + (char)i);

    cout<<str;
    return 0;
}