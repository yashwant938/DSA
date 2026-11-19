
#include <bits/stdc++.h>
using namespace std;

int fun(string s) {
    int n = s.size();
    int lastseen[3] = {-1, -1, -1};
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        lastseen[s[i] - 'a'] = i;

        if (lastseen[0] != -1 &&
            lastseen[1] != -1 &&
            lastseen[2] != -1) {
//make sense we are adding indexes
            cnt += 1 + min({lastseen[0],
                            lastseen[1],
                            lastseen[2]});
        }
    }

    return cnt;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string str;
    cin >> str;

    cout << fun(str) << "\n";

    return 0;
}
