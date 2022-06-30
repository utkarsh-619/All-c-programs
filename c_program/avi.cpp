#include <iostream>
#include <stack>
#include <string>
#include<algorithm>
using namespace std;

char change(char x) {
    switch (x) {
        case '(':
            return ')';
        case '{':
            return '}';
        case '[':
            return ']';
    }
}

int isValid(string s) {
    int count=0 , mx = 0;
    stack<char> bracket;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '[' || s[i] == '(' || s[i] == '{') {
            count++;
            bracket.push(s[i]);
        }

        else if (s[i] == ']' || s[i] == '}' || s[i] == ')') {
            if (bracket.empty()){
                mx = std::max(mx,count);
                continue;
            }

            if (change(bracket.top()) == s[i]) {
                count++;
                bracket.pop();
            }else{
                mx = std::max(mx, count);
                continue;
            }
        }
    }
    return mx;
    
}

int longestValidParentheses(string s) {
    for (int i = 0; i < s.length(); i++) {

    }
}

int main() {
    cout << isValid("(()");

    return 0;
}