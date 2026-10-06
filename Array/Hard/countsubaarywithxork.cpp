#include <bits/stdc++.h>
using namespace std;
void subarry(vector<int>vec,int k){
    int xr=0;
    map<int,int>mpp;
    mpp[xr]++;
    int cnt=0;
    int cnt=0;
    for(int i=0;i<mpp.size();i++){
        xr=xr^vec[i];
        int x=xr^k;
        cnt+=mpp[x];
        mpp[xr]++;
    }
    cout<<cnt;
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
    subarry(vec,k);
    

    return 0;
}