
#include <bits/stdc++.h>
using namespace std;

int checklongest(string str) {
    int hash[256];
    fill(hash, hash + 256, -1);

    int left = 0, right = 0;
    int maxlen = 0;

    while (right < str.size()) {

        unsigned char ch = str[right];

        if (hash[ch] != -1) {
            if (hash[ch] >= left) {
                left = hash[ch] + 1;
            }
        }

        int len = right - left + 1;
        maxlen = max(maxlen, len);

        hash[ch] = right;
        right++;
    }

    return maxlen;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string str;
    cin >> str;

    cout << checklongest(str);

    return 0;
}
