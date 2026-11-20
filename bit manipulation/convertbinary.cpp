#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string binary = "";
    if (n == 0) binary = "0";
    while (n > 0) {
        int t = n % 2;
        binary += char('0' + t);
        n /= 2;
    }
    // binary+=char('0'+t?)
    reverse(binary.begin(), binary.end());

    cout << binary << endl;
}