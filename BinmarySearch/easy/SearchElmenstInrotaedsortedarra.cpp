
#include <bits/stdc++.h>
using namespace std;

int BS(vector<int>& vec, int x) {
    int low = 0, high = (int)vec.size() - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (vec[mid] == x)
            return mid;

        // Left half is sorted
        if (vec[low] <= vec[mid]) {
            if (vec[low] <= x && x < vec[mid])
                high = mid - 1;
            else
                low = mid + 1;
        }
        // Right half is sorted
        else {
            if (vec[mid] < x && x <= vec[high])
                low = mid + 1;
            else
                high = mid - 1;
        }
    }

    return -1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> vec(n);
    for (int i = 0; i < n; i++)
        cin >> vec[i];

    int x;
    cin >> x;

    cout << BS(vec, x);
    return 0;
}
