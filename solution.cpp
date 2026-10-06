#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int> st;      // stores scores of outer contexts
        int res = 0;        // current inner score

        for (char c : s) {
            if (c == '(') {
                st.push(res);
                res = 0;
            } else { // c == ')'
                res = st.top() + max(res * 2, 1);
                st.pop();
            }
        }

        return res;
    }
};
