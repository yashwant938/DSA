
#include <bits/stdc++.h>
using namespace std;

int distinct(string str, int k) {
    int maxLen = 0, l = 0, r = 0;
    unordered_map<char, int> mpp;
    while (r < str.size()) {
        mpp[str[r]]++;
        if (mpp.size() > k) {
            mpp[str[l]]--;
            if (mpp[str[l]] == 0) {
                mpp.erase(str[l]);
            }
           

            l++;
        }

        maxLen = max(maxLen, r - l + 1);
        r++;
    }

    return maxLen;
}

int main() {
    string str;
    cin >> str;

    int k;
    cin >> k;

    cout << distinct(str, k);
    return 0;
}
