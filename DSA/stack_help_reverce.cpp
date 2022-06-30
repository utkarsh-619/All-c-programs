#include<iostream>
#include<stack>
using namespace std;

int main(){
    string ch;
    cin>>ch;
    int i=0,j=ch.length()-1;
    while(i<j){
        char temp=ch[i];
        ch[i]=ch[j];
        ch[j]=temp;
        i++,j--;
    }
    cout<<ch;
    return 0;
}