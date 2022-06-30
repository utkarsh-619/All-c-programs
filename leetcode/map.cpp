// #include<bits/stdc++.h>

// class Solution {
//    public:
//     string removeDuplicates(string s, int k) {
//         bool flag = 1;
//         stack<pair<char, int>> st;

//         for (char i : s) {
//             stack<pair<char, int>> temp = st;
//             while (!temp.empty()) {
//                 auto it = temp.top();
//                 temp.pop();
//                 cout << it.first << " " << it.second << endl;
//             }
//             cout << "\n";

//             if (st.empty()) {
//                 st.push({i, 1});
//                 continue;
//             }

//             auto it = st.top();
//             if (i == it.first) {
//                 it.second++;
//                 cout << it.first << " " << it.second << endl;
//                 if (it.second == k)
//                     st.pop();
//             } else
//                 st.push({i, 1});
//         }
//         string ans;
//         while (!st.empty()) {
//             auto it = st.top();
//             st.pop();

//             for (int i = 0; i < it.second; i++) ans += it.first;
//         }
//         reverse(ans.begin(), ans.end());
//         return ans;
//     }
// };