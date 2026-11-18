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
    int k;
    cin>>k;
    int left=0;
    int maxi=0;
    long long sum=0;
    
    for(int right=0;right<n;right++){
        sum+=vec[right];
        if(left<=right && sum>k){
            sum-=vec[left];
            left++;
        }
        maxi=max(maxi,right-left+1);
    }

    cout << "Maximum length is " << maxi << '\n';
    return 0;
}