#include <bits/stdc++.h>
using namespace std;
void countSubarray(vector<int>vec,int k){
     unordered_map<int,int>mpp;
     mpp[0]=1;
     int preSum=0, cnt=0;
     for(int i=0;i<vec.size();i++){
        preSum+=vec[i];
        int remove=preSum-k;
        mpp[preSum]+=1;
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

    countSubarray(vec.k);

    return 0;
}