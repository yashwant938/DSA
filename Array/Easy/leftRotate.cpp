#include <bits/stdc++.h>
using namespace std;
void rotationArray(vector<int>&vec,int n,int k){
    reverse(vec.begin(),vec.begin()+k);
    reverse(vec.begin()+k,vec.end());
    reverse(vec.begin(),vec.end());
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    vector<int>vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    int k;
    cin>>k;
    rotationArray(vec,n,k);
    for(auto it:vec){
        cout<<it<<",";
    }
    return 0;
}