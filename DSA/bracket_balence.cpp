#include<iostream>
#include<string>
#include<stack>
using namespace std;

int main(){
    string str;
    stack<char> temp;
    getline(cin,str);
    for(int i=0;i<str.length();i++){
        if(str[i]=='(' || str[i]=='{' || str[i]=='['){
            temp.push(str[i]);
        }
        // cout<<temp.empty();
        if(str[i]==')' || str[i]=='}' || str[i]==']'){
            if(temp.empty()){
                cout<<"false";
                break;
            }
            if(str[i]==')'){
                if(temp.top()!='('){
                    cout<<"false";
                    break;
                }
                temp.pop();
            }
            if(str[i]=='}'){
                if(temp.top()!='{'){
                    cout<<"false";
                    break;
                }
                temp.pop();
            }
            if(str[i]==']'){
                if(temp.top()!='['){
                    cout<<"false";
                    break;
                }
                temp.pop();
            }
        }
    }
    if(temp.empty()){
        cout<<"true";
    }
    return 0;
}