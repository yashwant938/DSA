#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    unordered_map<int,int>mpp;
    vector<int>vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    for(int i=0;i<n;i++){
        mpp[vec[i]]++;
    }
    for(auto it:mpp){
        cout<<it.first<<","<<it.second<<"\n";
    }


    return 0;
}