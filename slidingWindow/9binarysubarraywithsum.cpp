
#include <bits/stdc++.h>
using namespace std;

int func(vector<int>& vec, int goal) {
    if (goal < 0) return 0;

    int left = 0, right = 0;
    int sum = 0, cnt = 0;

    while (right < vec.size()) {
        sum += vec[right];

        while (sum > goal) {
            sum -= vec[left];
            left++;
        }

        cnt += right - left + 1;
        right++;
    }

    return cnt;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> vec(n);

    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    int goal;
    cin >> goal;

    cout << func(vec, goal) - func(vec, goal - 1);

    return 0;
}
