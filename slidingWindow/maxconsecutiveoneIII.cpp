#include <bits/stdc++.h>
using namespace std;
int Flip(vector<int>&vec,int k){
    int maxLen=0, left=0, right=0, zeroes=0;
    while(right<vec.size()){
        if(vec[right]==0)  zeroes++;
        while(zeroes>k){
            if(vec[left]==0)    zeroes--;
            left++;
        }
        if(zeroes<=k)   {
           
            maxLen=max(maxLen,right-left+1);
        }
        right++;
    }
    return maxLen;
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

    int k;
    cin>>k;
    cout<<Flip(vec,k);

    return 0;
}