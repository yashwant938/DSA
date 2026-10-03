#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> vec(n);

    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }
    int maxElement=*max_element(vec.begin(),vec.end());
    vector<int>mpp(maxElement+1,0);
    for(int it:vec){
        mpp[it]++;
    }
    for (int i = 0; i < mpp.size(); i++) {
        if (mpp[i] == 1) {
            cout << i;
            return 0;
        }
    }
    cout<<-1;

    return 0;
}