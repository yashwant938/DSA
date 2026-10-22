
#include <bits/stdc++.h>
using namespace std;

int lowerBound(vector<int>& nums, int target) {
    int left = 0, right = nums.size() - 1;
    int ans = nums.size();

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] >= target) {
            ans = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    return ans;
}

int upperBound(vector<int>& nums, int target) {
    int left = 0, right = nums.size() - 1;
    int ans = nums.size();

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] > target) {
            ans = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    return ans;
}

int main() {
    int n;
    cin >> n;

    vector<int> vec(n);
    for (int i = 0; i < n; i++)
        cin >> vec[i];

    int x;
    cin >> x;

    // Binary search requires sorted input
    int first = lowerBound(vec, x);
    int last = upperBound(vec, x) - 1;

    if (first == n || vec[first] != x) {
        cout << "First occurrence: -1\n";
        cout << "Last occurrence: -1\n";
    } else {
        cout << "First occurrence: " << first << "\n";
        cout << "Last occurrence: " << last << "\n";
    }

    return 0;
}
