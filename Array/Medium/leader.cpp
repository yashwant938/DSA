#include <bits/stdc++.h>
using namespace std;
vector<int> leaderArray(vector<int>vec,int n){
    vector<int>ans;
    int maxRight=vec[n-1];
    ans.push_back(vec[n-1]);
    for(int i=n-2;i>=0;i--){
        if(vec[i]>maxRight){
            ans.push_back(vec[i]);
            maxRight=vec[i];
        }
    }
    reverse(vec.begin(),vec.end());
    return vec;
    
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

    vector<int>ans=leaderArray(vec,n);
    for(auto it:ans){
        cout<<it<<",";
    }
    return 0;
}