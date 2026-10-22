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
    int left=0,right=k-1;
    for(int i=left;i<right;i++){
        while(right<n){
            int sum=sum-vec[left];
            left++;
            right++;
            sum=sum+vec[right];
            int maxSum=max(maxSum,sum);
        }
    }

    cout<<maxSum<<endl;
}