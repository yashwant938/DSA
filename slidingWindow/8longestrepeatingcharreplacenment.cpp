
#include <bits/stdc++.h>
using namespace std;

int func(string str, int k) {
    int left = 0, right = 0;
    int maxLen = 0, maxfreq = 0;
    int hash[26] = {0};

    while (right < str.size()) {

        hash[str[right] - 'A']++;

        maxfreq = max(maxfreq, hash[str[right] - 'A']);

        while ((right - left + 1) - maxfreq > k) {
            hash[str[left] - 'A']--;
            left++;

            // Recalculate maximum frequency
            maxfreq = 0;
            for (int i = 0; i < 26; i++) {
                maxfreq = max(maxfreq, hash[i]);
            }
        }

        maxLen = max(maxLen, right - left + 1);
        right++;
    }

    return maxLen;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string str;
    cin >> str;

    int k;
    cin >> k;

    cout << func(str, k) << "\n";

    return 0;
}
